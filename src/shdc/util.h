#pragma once
#include <string>
#include "input.h"
#include "spirvcross.h"
#include "bytecode.h"
#include "types/slang.h"
#include "types/uniform.h"

namespace shdc {

// utility functions for generators
namespace util {
    ErrMsg check_errors(const input_t& inp, const spirvcross_t& spirvcross, Slang::type_t slang);
    const char* slang_file_extension(Slang::type_t c, bool binary);
    const char* uniform_type_str(Uniform::type_t type);
    int uniform_size(Uniform::type_t type, int array_size);
    int roundup(int val, int round_to);
    std::string mod_prefix(const input_t& inp);
    const SpirvcrossSource* find_spirvcross_source_by_shader_name(const std::string& shader_name, const input_t& inp, const spirvcross_t& spirvcross);
    const BytecodeBlob* find_bytecode_blob_by_shader_name(const std::string& shader_name, const input_t& inp, const Bytecode& bytecode);
    std::string to_camel_case(const std::string& str);
    std::string to_pascal_case(const std::string& str);
    std::string to_ada_case(const std::string& str);
    std::string to_upper_case(const std::string& str);
    std::string replace_C_comment_tokens(const std::string& str);
};

} // namespace shdc
