#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 226
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_DQUOTE = 1,
  aux_sym_legacy_quoted_command_token1 = 2,
  anon_sym_PIPE = 3,
  anon_sym_PIPEH = 4,
  anon_sym_PIPET = 5,
  anon_sym_AT_AT = 6,
  anon_sym_AT_ATdbt = 7,
  anon_sym_AT_ATdbta = 8,
  anon_sym_AT_ATdbtb = 9,
  anon_sym_AT_ATdbts = 10,
  anon_sym_AT_AT_DOT = 11,
  anon_sym_AT_AT_EQ = 12,
  anon_sym_AT_ATk = 13,
  anon_sym_AT_ATt = 14,
  anon_sym_AT_ATb = 15,
  anon_sym_AT_ATi = 16,
  anon_sym_AT_ATiS = 17,
  anon_sym_AT_ATf = 18,
  anon_sym_COLON = 19,
  anon_sym_AT_ATs_COLON = 20,
  anon_sym_AT_ATc_COLON = 21,
  anon_sym_AT = 22,
  anon_sym_AT_BANG = 23,
  anon_sym_AT_LPAREN = 24,
  anon_sym_ATa_COLON = 25,
  anon_sym_ATb_COLON = 26,
  anon_sym_ATB_COLON = 27,
  anon_sym_ATe_COLON = 28,
  anon_sym_COMMA = 29,
  anon_sym_ATF_COLON = 30,
  anon_sym_ATi_COLON = 31,
  anon_sym_ATk_COLON = 32,
  anon_sym_ATo_COLON = 33,
  anon_sym_ATr_COLON = 34,
  anon_sym_ATf_COLON = 35,
  anon_sym_ATs_COLON = 36,
  anon_sym_ATx_COLON = 37,
  sym_interpreter_command = 38,
  anon_sym_RPAREN = 39,
  anon_sym_LPAREN = 40,
  anon_sym_LPAREN_STAR = 41,
  anon_sym_DOT_DASH = 42,
  anon_sym_DOT_BANG = 43,
  anon_sym_DOT_LPAREN = 44,
  anon_sym_DOT_SLASH = 45,
  anon_sym_ = 46,
  anon_sym_PIPE_DOT = 47,
  anon_sym_PERCENT = 48,
  anon_sym_DOT_DOT_DOT = 49,
  aux_sym_interpret_identifier_token1 = 50,
  sym__point_interpret_identifier = 51,
  sym_system_identifier = 52,
  sym_pointer_identifier = 53,
  anon_sym_EQ = 54,
  sym_macro_identifier = 55,
  sym_macro_call_content = 56,
  anon_sym_GT = 57,
  anon_sym_1_GT = 58,
  anon_sym_2_GT = 59,
  anon_sym_H_GT = 60,
  anon_sym_GT_GT = 61,
  anon_sym_1_GT_GT = 62,
  anon_sym_2_GT_GT = 63,
  sym_tmp_eval_arg = 64,
  sym_eq_sep_key = 65,
  sym_eq_sep_val = 66,
  sym_macro_content = 67,
  sym__any_command = 68,
  aux_sym_arg_identifier_token1 = 69,
  aux_sym_arg_identifier_token2 = 70,
  sym_number = 71,
  anon_sym_SQUOTE = 72,
  aux_sym_quoted_arg_token1 = 73,
  anon_sym_DOLLAR_LPAREN = 74,
  anon_sym_BQUOTE = 75,
  sym__comment = 76,
  anon_sym_LF = 77,
  anon_sym_CR = 78,
  anon_sym_SEMI = 79,
  sym_cmd_identifier = 80,
  sym__help_command = 81,
  sym__question_mark_identifier = 82,
  sym__env_identifier = 83,
  sym_commands = 84,
  sym__commands_singleline = 85,
  sym__command = 86,
  sym_legacy_quoted_command = 87,
  sym__simple_command = 88,
  sym__tmp_command = 89,
  sym__iter_command = 90,
  sym__pipe_command = 91,
  sym_html_disable_command = 92,
  sym_html_enable_command = 93,
  sym_scr_tts_command = 94,
  sym_pipe_command = 95,
  sym_pipe_second_command = 96,
  sym_iter_flags_command = 97,
  sym_iter_dbta_command = 98,
  sym_iter_dbtb_command = 99,
  sym_iter_dbts_command = 100,
  sym_iter_file_lines_command = 101,
  sym_iter_offsets_command = 102,
  sym_iter_sdbquery_command = 103,
  sym_iter_threads_command = 104,
  sym_iter_bbs_command = 105,
  sym_iter_instrs_command = 106,
  sym_iter_sections_command = 107,
  sym_iter_functions_command = 108,
  sym_iter_step_command = 109,
  sym_iter_interpret_command = 110,
  sym_tmp_seek_command = 111,
  sym_tmp_blksz_command = 112,
  sym_tmp_fromto_command = 113,
  sym_tmp_arch_command = 114,
  sym_tmp_bits_command = 115,
  sym_tmp_nthi_command = 116,
  sym_tmp_eval_command = 117,
  sym_tmp_fs_command = 118,
  sym_tmp_reli_command = 119,
  sym_tmp_kuery_command = 120,
  sym_tmp_fd_command = 121,
  sym_tmp_reg_command = 122,
  sym_tmp_file_command = 123,
  sym_tmp_string_command = 124,
  sym_tmp_hex_command = 125,
  sym_arged_command = 126,
  sym__simple_arged_command = 127,
  sym__math_arged_command = 128,
  sym__pointer_arged_command = 129,
  sym__macro_arged_command = 130,
  sym__system_command = 131,
  sym__interpret_command = 132,
  sym__env_command = 133,
  sym__last_command = 134,
  sym_last_command_identifier = 135,
  sym_interpret_identifier = 136,
  sym_interpret_arg = 137,
  sym_system_arg = 138,
  sym_question_mark_identifier = 139,
  sym_help_command = 140,
  sym_repeat_command = 141,
  sym__eq_sep_args = 142,
  sym_out_redirect_command = 143,
  sym_err_redirect_command = 144,
  sym_html_redirect_command = 145,
  sym_out_append_redirect_command = 146,
  sym_err_append_redirect_command = 147,
  sym_arg = 148,
  sym_arg_identifier = 149,
  sym_quoted_arg = 150,
  sym_cmd_substitution_arg = 151,
  aux_sym_commands_repeat1 = 152,
  aux_sym_commands_repeat2 = 153,
  aux_sym__commands_singleline_repeat1 = 154,
  aux_sym__commands_singleline_repeat2 = 155,
  aux_sym_iter_offsets_command_repeat1 = 156,
  aux_sym_tmp_eval_command_repeat1 = 157,
  aux_sym__interpret_command_repeat1 = 158,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_legacy_quoted_command_token1] = "legacy_quoted_command_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPEH] = "|H",
  [anon_sym_PIPET] = "|T",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_ATdbt] = "@@dbt",
  [anon_sym_AT_ATdbta] = "@@dbta",
  [anon_sym_AT_ATdbtb] = "@@dbtb",
  [anon_sym_AT_ATdbts] = "@@dbts",
  [anon_sym_AT_AT_DOT] = "@@.",
  [anon_sym_AT_AT_EQ] = "@@=",
  [anon_sym_AT_ATk] = "@@k",
  [anon_sym_AT_ATt] = "@@t",
  [anon_sym_AT_ATb] = "@@b",
  [anon_sym_AT_ATi] = "@@i",
  [anon_sym_AT_ATiS] = "@@iS",
  [anon_sym_AT_ATf] = "@@f",
  [anon_sym_COLON] = ":",
  [anon_sym_AT_ATs_COLON] = "@@s:",
  [anon_sym_AT_ATc_COLON] = "@@c:",
  [anon_sym_AT] = "@",
  [anon_sym_AT_BANG] = "@!",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_ATa_COLON] = "@a:",
  [anon_sym_ATb_COLON] = "@b:",
  [anon_sym_ATB_COLON] = "@B:",
  [anon_sym_ATe_COLON] = "@e:",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATF_COLON] = "@F:",
  [anon_sym_ATi_COLON] = "@i:",
  [anon_sym_ATk_COLON] = "@k:",
  [anon_sym_ATo_COLON] = "@o:",
  [anon_sym_ATr_COLON] = "@r:",
  [anon_sym_ATf_COLON] = "@f:",
  [anon_sym_ATs_COLON] = "@s:",
  [anon_sym_ATx_COLON] = "@x:",
  [sym_interpreter_command] = "interpreter_command",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DOT_BANG] = ".!",
  [anon_sym_DOT_LPAREN] = ".(",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_] = " ",
  [anon_sym_PIPE_DOT] = "|.",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_interpret_identifier_token1] = "interpret_identifier_token1",
  [sym__point_interpret_identifier] = "_point_interpret_identifier",
  [sym_system_identifier] = "system_identifier",
  [sym_pointer_identifier] = "pointer_identifier",
  [anon_sym_EQ] = "=",
  [sym_macro_identifier] = "macro_identifier",
  [sym_macro_call_content] = "macro_call_content",
  [anon_sym_GT] = ">",
  [anon_sym_1_GT] = "1>",
  [anon_sym_2_GT] = "2>",
  [anon_sym_H_GT] = "H>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_1_GT_GT] = "1>>",
  [anon_sym_2_GT_GT] = "2>>",
  [sym_tmp_eval_arg] = "tmp_eval_arg",
  [sym_eq_sep_key] = "eq_sep_key",
  [sym_eq_sep_val] = "eq_sep_val",
  [sym_macro_content] = "macro_content",
  [sym__any_command] = "_any_command",
  [aux_sym_arg_identifier_token1] = "arg_identifier_token1",
  [aux_sym_arg_identifier_token2] = "arg_identifier_token2",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_arg_token1] = "quoted_arg_token1",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_BQUOTE] = "`",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym__help_command] = "_help_command",
  [sym__question_mark_identifier] = "_question_mark_identifier",
  [sym__env_identifier] = "_env_identifier",
  [sym_commands] = "commands",
  [sym__commands_singleline] = "_commands_singleline",
  [sym__command] = "_command",
  [sym_legacy_quoted_command] = "legacy_quoted_command",
  [sym__simple_command] = "_simple_command",
  [sym__tmp_command] = "_tmp_command",
  [sym__iter_command] = "_iter_command",
  [sym__pipe_command] = "_pipe_command",
  [sym_html_disable_command] = "html_disable_command",
  [sym_html_enable_command] = "html_enable_command",
  [sym_scr_tts_command] = "scr_tts_command",
  [sym_pipe_command] = "pipe_command",
  [sym_pipe_second_command] = "pipe_second_command",
  [sym_iter_flags_command] = "iter_flags_command",
  [sym_iter_dbta_command] = "iter_dbta_command",
  [sym_iter_dbtb_command] = "iter_dbtb_command",
  [sym_iter_dbts_command] = "iter_dbts_command",
  [sym_iter_file_lines_command] = "iter_file_lines_command",
  [sym_iter_offsets_command] = "iter_offsets_command",
  [sym_iter_sdbquery_command] = "iter_sdbquery_command",
  [sym_iter_threads_command] = "iter_threads_command",
  [sym_iter_bbs_command] = "iter_bbs_command",
  [sym_iter_instrs_command] = "iter_instrs_command",
  [sym_iter_sections_command] = "iter_sections_command",
  [sym_iter_functions_command] = "iter_functions_command",
  [sym_iter_step_command] = "iter_step_command",
  [sym_iter_interpret_command] = "iter_interpret_command",
  [sym_tmp_seek_command] = "tmp_seek_command",
  [sym_tmp_blksz_command] = "tmp_blksz_command",
  [sym_tmp_fromto_command] = "tmp_fromto_command",
  [sym_tmp_arch_command] = "tmp_arch_command",
  [sym_tmp_bits_command] = "tmp_bits_command",
  [sym_tmp_nthi_command] = "tmp_nthi_command",
  [sym_tmp_eval_command] = "tmp_eval_command",
  [sym_tmp_fs_command] = "tmp_fs_command",
  [sym_tmp_reli_command] = "tmp_reli_command",
  [sym_tmp_kuery_command] = "tmp_kuery_command",
  [sym_tmp_fd_command] = "tmp_fd_command",
  [sym_tmp_reg_command] = "tmp_reg_command",
  [sym_tmp_file_command] = "tmp_file_command",
  [sym_tmp_string_command] = "tmp_string_command",
  [sym_tmp_hex_command] = "tmp_hex_command",
  [sym_arged_command] = "arged_command",
  [sym__simple_arged_command] = "_simple_arged_command",
  [sym__math_arged_command] = "_math_arged_command",
  [sym__pointer_arged_command] = "_pointer_arged_command",
  [sym__macro_arged_command] = "_macro_arged_command",
  [sym__system_command] = "_system_command",
  [sym__interpret_command] = "_interpret_command",
  [sym__env_command] = "_env_command",
  [sym__last_command] = "_last_command",
  [sym_last_command_identifier] = "last_command_identifier",
  [sym_interpret_identifier] = "interpret_identifier",
  [sym_interpret_arg] = "interpret_arg",
  [sym_system_arg] = "system_arg",
  [sym_question_mark_identifier] = "question_mark_identifier",
  [sym_help_command] = "help_command",
  [sym_repeat_command] = "repeat_command",
  [sym__eq_sep_args] = "_eq_sep_args",
  [sym_out_redirect_command] = "out_redirect_command",
  [sym_err_redirect_command] = "err_redirect_command",
  [sym_html_redirect_command] = "html_redirect_command",
  [sym_out_append_redirect_command] = "out_append_redirect_command",
  [sym_err_append_redirect_command] = "err_append_redirect_command",
  [sym_arg] = "arg",
  [sym_arg_identifier] = "arg_identifier",
  [sym_quoted_arg] = "quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_iter_offsets_command_repeat1] = "iter_offsets_command_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym__interpret_command_repeat1] = "_interpret_command_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_quoted_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPEH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbtb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATiS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATc_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATa_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATb_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATB_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATe_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATF_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATi_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATk_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATr_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATx_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_interpreter_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpret_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__point_interpret_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_system_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_call_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_tmp_eval_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_sep_key] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_sep_val] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_content] = {
    .visible = true,
    .named = true,
  },
  [sym__any_command] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_arg_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_cmd_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__help_command] = {
    .visible = false,
    .named = true,
  },
  [sym__question_mark_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__env_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_commands] = {
    .visible = true,
    .named = true,
  },
  [sym__commands_singleline] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_legacy_quoted_command] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_command] = {
    .visible = false,
    .named = true,
  },
  [sym__tmp_command] = {
    .visible = false,
    .named = true,
  },
  [sym__iter_command] = {
    .visible = false,
    .named = true,
  },
  [sym__pipe_command] = {
    .visible = false,
    .named = true,
  },
  [sym_html_disable_command] = {
    .visible = true,
    .named = true,
  },
  [sym_html_enable_command] = {
    .visible = true,
    .named = true,
  },
  [sym_scr_tts_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_second_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_flags_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbta_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbtb_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbts_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_file_lines_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_offsets_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_sdbquery_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_threads_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_bbs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_instrs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_sections_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_functions_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_step_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_interpret_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_seek_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_blksz_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fromto_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_arch_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_bits_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_nthi_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_eval_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_reli_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_kuery_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fd_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_reg_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_file_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_string_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_hex_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arged_command] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__math_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__pointer_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__macro_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__system_command] = {
    .visible = false,
    .named = true,
  },
  [sym__interpret_command] = {
    .visible = false,
    .named = true,
  },
  [sym__env_command] = {
    .visible = false,
    .named = true,
  },
  [sym__last_command] = {
    .visible = false,
    .named = true,
  },
  [sym_last_command_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_system_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_help_command] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_command] = {
    .visible = true,
    .named = true,
  },
  [sym__eq_sep_args] = {
    .visible = false,
    .named = true,
  },
  [sym_out_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_err_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_html_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_out_append_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_err_append_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_substitution_arg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_commands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__commands_singleline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__commands_singleline_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_iter_offsets_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tmp_eval_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpret_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_command = 2,
  field_string = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_command] = "command",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command, 0},
  [1] =
    {field_args, 0, .inherited = true},
    {field_command, 0, .inherited = true},
  [3] =
    {field_args, 1},
    {field_command, 0},
  [5] =
    {field_args, 0},
    {field_command, 1},
  [7] =
    {field_string, 1},
  [8] =
    {field_args, 2},
    {field_command, 0},
    {field_command, 1},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(233);
      if (lookahead == '2') ADVANCE(234);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '|') ADVANCE(51);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(245);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(233);
      if (lookahead == '2') ADVANCE(234);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '|') ADVANCE(51);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(222);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(230);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(194);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(195);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(72);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead == 'F') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__point_interpret_identifier);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '*' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(167);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(194);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(195);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(222);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == 'H') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '>') ADVANCE(155);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '>') ADVANCE(157);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(236);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(221);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 1},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 2, .external_lex_state = 2},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token__question_mark_identifier = 2,
  ts_external_token__env_identifier = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token__question_mark_identifier] = sym__question_mark_identifier,
  [ts_external_token__env_identifier] = sym__env_identifier,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPEH] = ACTIONS(1),
    [anon_sym_PIPET] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_ATdbt] = ACTIONS(1),
    [anon_sym_AT_ATdbta] = ACTIONS(1),
    [anon_sym_AT_ATdbtb] = ACTIONS(1),
    [anon_sym_AT_ATdbts] = ACTIONS(1),
    [anon_sym_AT_AT_DOT] = ACTIONS(1),
    [anon_sym_AT_AT_EQ] = ACTIONS(1),
    [anon_sym_AT_ATk] = ACTIONS(1),
    [anon_sym_AT_ATt] = ACTIONS(1),
    [anon_sym_AT_ATb] = ACTIONS(1),
    [anon_sym_AT_ATi] = ACTIONS(1),
    [anon_sym_AT_ATiS] = ACTIONS(1),
    [anon_sym_AT_ATf] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT_ATs_COLON] = ACTIONS(1),
    [anon_sym_AT_ATc_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_BANG] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_ATa_COLON] = ACTIONS(1),
    [anon_sym_ATb_COLON] = ACTIONS(1),
    [anon_sym_ATB_COLON] = ACTIONS(1),
    [anon_sym_ATe_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATF_COLON] = ACTIONS(1),
    [anon_sym_ATi_COLON] = ACTIONS(1),
    [anon_sym_ATk_COLON] = ACTIONS(1),
    [anon_sym_ATo_COLON] = ACTIONS(1),
    [anon_sym_ATr_COLON] = ACTIONS(1),
    [anon_sym_ATf_COLON] = ACTIONS(1),
    [anon_sym_ATs_COLON] = ACTIONS(1),
    [anon_sym_ATx_COLON] = ACTIONS(1),
    [sym_interpreter_command] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [anon_sym_DOT_BANG] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_interpret_identifier_token1] = ACTIONS(1),
    [sym__point_interpret_identifier] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
    [sym_pointer_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_1_GT] = ACTIONS(1),
    [anon_sym_2_GT] = ACTIONS(1),
    [anon_sym_H_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_1_GT_GT] = ACTIONS(1),
    [anon_sym_2_GT_GT] = ACTIONS(1),
    [aux_sym_arg_identifier_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym__question_mark_identifier] = ACTIONS(1),
    [sym__env_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(220),
    [sym__command] = STATE(177),
    [sym_legacy_quoted_command] = STATE(177),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_html_disable_command] = STATE(105),
    [sym_html_enable_command] = STATE(105),
    [sym_scr_tts_command] = STATE(105),
    [sym_pipe_command] = STATE(105),
    [sym_iter_flags_command] = STATE(105),
    [sym_iter_dbta_command] = STATE(105),
    [sym_iter_dbtb_command] = STATE(105),
    [sym_iter_dbts_command] = STATE(105),
    [sym_iter_file_lines_command] = STATE(105),
    [sym_iter_offsets_command] = STATE(105),
    [sym_iter_sdbquery_command] = STATE(105),
    [sym_iter_threads_command] = STATE(105),
    [sym_iter_bbs_command] = STATE(105),
    [sym_iter_instrs_command] = STATE(105),
    [sym_iter_sections_command] = STATE(105),
    [sym_iter_functions_command] = STATE(105),
    [sym_iter_step_command] = STATE(105),
    [sym_iter_interpret_command] = STATE(105),
    [sym_tmp_seek_command] = STATE(105),
    [sym_tmp_blksz_command] = STATE(105),
    [sym_tmp_fromto_command] = STATE(105),
    [sym_tmp_arch_command] = STATE(105),
    [sym_tmp_bits_command] = STATE(105),
    [sym_tmp_nthi_command] = STATE(105),
    [sym_tmp_eval_command] = STATE(105),
    [sym_tmp_fs_command] = STATE(105),
    [sym_tmp_reli_command] = STATE(105),
    [sym_tmp_kuery_command] = STATE(105),
    [sym_tmp_fd_command] = STATE(105),
    [sym_tmp_reg_command] = STATE(105),
    [sym_tmp_file_command] = STATE(105),
    [sym_tmp_string_command] = STATE(105),
    [sym_tmp_hex_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(177),
    [sym_repeat_command] = STATE(105),
    [sym_out_redirect_command] = STATE(177),
    [sym_err_redirect_command] = STATE(177),
    [sym_html_redirect_command] = STATE(177),
    [sym_out_append_redirect_command] = STATE(177),
    [sym_err_append_redirect_command] = STATE(177),
    [aux_sym_commands_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(11),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__command] = STATE(180),
    [sym_legacy_quoted_command] = STATE(180),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_html_disable_command] = STATE(105),
    [sym_html_enable_command] = STATE(105),
    [sym_scr_tts_command] = STATE(105),
    [sym_pipe_command] = STATE(105),
    [sym_iter_flags_command] = STATE(105),
    [sym_iter_dbta_command] = STATE(105),
    [sym_iter_dbtb_command] = STATE(105),
    [sym_iter_dbts_command] = STATE(105),
    [sym_iter_file_lines_command] = STATE(105),
    [sym_iter_offsets_command] = STATE(105),
    [sym_iter_sdbquery_command] = STATE(105),
    [sym_iter_threads_command] = STATE(105),
    [sym_iter_bbs_command] = STATE(105),
    [sym_iter_instrs_command] = STATE(105),
    [sym_iter_sections_command] = STATE(105),
    [sym_iter_functions_command] = STATE(105),
    [sym_iter_step_command] = STATE(105),
    [sym_iter_interpret_command] = STATE(105),
    [sym_tmp_seek_command] = STATE(105),
    [sym_tmp_blksz_command] = STATE(105),
    [sym_tmp_fromto_command] = STATE(105),
    [sym_tmp_arch_command] = STATE(105),
    [sym_tmp_bits_command] = STATE(105),
    [sym_tmp_nthi_command] = STATE(105),
    [sym_tmp_eval_command] = STATE(105),
    [sym_tmp_fs_command] = STATE(105),
    [sym_tmp_reli_command] = STATE(105),
    [sym_tmp_kuery_command] = STATE(105),
    [sym_tmp_fd_command] = STATE(105),
    [sym_tmp_reg_command] = STATE(105),
    [sym_tmp_file_command] = STATE(105),
    [sym_tmp_string_command] = STATE(105),
    [sym_tmp_hex_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(180),
    [sym_repeat_command] = STATE(105),
    [sym_out_redirect_command] = STATE(180),
    [sym_err_redirect_command] = STATE(180),
    [sym_html_redirect_command] = STATE(180),
    [sym_out_append_redirect_command] = STATE(180),
    [sym_err_append_redirect_command] = STATE(180),
    [aux_sym_commands_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(49),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__command] = STATE(182),
    [sym_legacy_quoted_command] = STATE(182),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_html_disable_command] = STATE(105),
    [sym_html_enable_command] = STATE(105),
    [sym_scr_tts_command] = STATE(105),
    [sym_pipe_command] = STATE(105),
    [sym_iter_flags_command] = STATE(105),
    [sym_iter_dbta_command] = STATE(105),
    [sym_iter_dbtb_command] = STATE(105),
    [sym_iter_dbts_command] = STATE(105),
    [sym_iter_file_lines_command] = STATE(105),
    [sym_iter_offsets_command] = STATE(105),
    [sym_iter_sdbquery_command] = STATE(105),
    [sym_iter_threads_command] = STATE(105),
    [sym_iter_bbs_command] = STATE(105),
    [sym_iter_instrs_command] = STATE(105),
    [sym_iter_sections_command] = STATE(105),
    [sym_iter_functions_command] = STATE(105),
    [sym_iter_step_command] = STATE(105),
    [sym_iter_interpret_command] = STATE(105),
    [sym_tmp_seek_command] = STATE(105),
    [sym_tmp_blksz_command] = STATE(105),
    [sym_tmp_fromto_command] = STATE(105),
    [sym_tmp_arch_command] = STATE(105),
    [sym_tmp_bits_command] = STATE(105),
    [sym_tmp_nthi_command] = STATE(105),
    [sym_tmp_eval_command] = STATE(105),
    [sym_tmp_fs_command] = STATE(105),
    [sym_tmp_reli_command] = STATE(105),
    [sym_tmp_kuery_command] = STATE(105),
    [sym_tmp_fd_command] = STATE(105),
    [sym_tmp_reg_command] = STATE(105),
    [sym_tmp_file_command] = STATE(105),
    [sym_tmp_string_command] = STATE(105),
    [sym_tmp_hex_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(182),
    [sym_repeat_command] = STATE(105),
    [sym_out_redirect_command] = STATE(182),
    [sym_err_redirect_command] = STATE(182),
    [sym_html_redirect_command] = STATE(182),
    [sym_out_append_redirect_command] = STATE(182),
    [sym_err_append_redirect_command] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(55),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [4] = {
    [sym__commands_singleline] = STATE(199),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(117),
    [sym_out_redirect_command] = STATE(192),
    [sym_err_redirect_command] = STATE(192),
    [sym_html_redirect_command] = STATE(192),
    [sym_out_append_redirect_command] = STATE(192),
    [sym_err_append_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(59),
  },
  [5] = {
    [sym__commands_singleline] = STATE(217),
    [sym__command] = STATE(186),
    [sym_legacy_quoted_command] = STATE(186),
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_help_command] = STATE(186),
    [sym_repeat_command] = STATE(116),
    [sym_out_redirect_command] = STATE(186),
    [sym_err_redirect_command] = STATE(186),
    [sym_html_redirect_command] = STATE(186),
    [sym_out_append_redirect_command] = STATE(186),
    [sym_err_append_redirect_command] = STATE(186),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__help_command] = ACTIONS(81),
    [sym__question_mark_identifier] = ACTIONS(83),
    [sym__env_identifier] = ACTIONS(71),
  },
  [6] = {
    [sym__commands_singleline] = STATE(216),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(117),
    [sym_out_redirect_command] = STATE(192),
    [sym_err_redirect_command] = STATE(192),
    [sym_html_redirect_command] = STATE(192),
    [sym_out_append_redirect_command] = STATE(192),
    [sym_err_append_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(59),
  },
  [7] = {
    [sym__commands_singleline] = STATE(211),
    [sym__command] = STATE(186),
    [sym_legacy_quoted_command] = STATE(186),
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_help_command] = STATE(186),
    [sym_repeat_command] = STATE(116),
    [sym_out_redirect_command] = STATE(186),
    [sym_err_redirect_command] = STATE(186),
    [sym_html_redirect_command] = STATE(186),
    [sym_out_append_redirect_command] = STATE(186),
    [sym_err_append_redirect_command] = STATE(186),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__help_command] = ACTIONS(81),
    [sym__question_mark_identifier] = ACTIONS(83),
    [sym__env_identifier] = ACTIONS(71),
  },
  [8] = {
    [sym__commands_singleline] = STATE(209),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(117),
    [sym_out_redirect_command] = STATE(192),
    [sym_err_redirect_command] = STATE(192),
    [sym_html_redirect_command] = STATE(192),
    [sym_out_append_redirect_command] = STATE(192),
    [sym_err_append_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(11),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(59),
  },
  [9] = {
    [sym__commands_singleline] = STATE(224),
    [sym__command] = STATE(186),
    [sym_legacy_quoted_command] = STATE(186),
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_help_command] = STATE(186),
    [sym_repeat_command] = STATE(116),
    [sym_out_redirect_command] = STATE(186),
    [sym_err_redirect_command] = STATE(186),
    [sym_html_redirect_command] = STATE(186),
    [sym_out_append_redirect_command] = STATE(186),
    [sym_err_append_redirect_command] = STATE(186),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__help_command] = ACTIONS(81),
    [sym__question_mark_identifier] = ACTIONS(83),
    [sym__env_identifier] = ACTIONS(71),
  },
  [10] = {
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(117),
    [sym_out_redirect_command] = STATE(193),
    [sym_err_redirect_command] = STATE(193),
    [sym_html_redirect_command] = STATE(193),
    [sym_out_append_redirect_command] = STATE(193),
    [sym_err_append_redirect_command] = STATE(193),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(59),
  },
  [11] = {
    [sym__command] = STATE(187),
    [sym_legacy_quoted_command] = STATE(187),
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(187),
    [sym_repeat_command] = STATE(117),
    [sym_out_redirect_command] = STATE(187),
    [sym_err_redirect_command] = STATE(187),
    [sym_html_redirect_command] = STATE(187),
    [sym_out_append_redirect_command] = STATE(187),
    [sym_err_append_redirect_command] = STATE(187),
    [aux_sym__commands_singleline_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(89),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(91),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(59),
  },
  [12] = {
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(116),
    [sym_out_redirect_command] = STATE(193),
    [sym_err_redirect_command] = STATE(193),
    [sym_html_redirect_command] = STATE(193),
    [sym_out_append_redirect_command] = STATE(193),
    [sym_err_append_redirect_command] = STATE(193),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__help_command] = ACTIONS(81),
    [sym__question_mark_identifier] = ACTIONS(83),
    [sym__env_identifier] = ACTIONS(71),
  },
  [13] = {
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_help_command] = STATE(189),
    [sym_repeat_command] = STATE(116),
    [sym_out_redirect_command] = STATE(189),
    [sym_err_redirect_command] = STATE(189),
    [sym_html_redirect_command] = STATE(189),
    [sym_out_append_redirect_command] = STATE(189),
    [sym_err_append_redirect_command] = STATE(189),
    [aux_sym__commands_singleline_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(93),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(91),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__help_command] = ACTIONS(81),
    [sym__question_mark_identifier] = ACTIONS(83),
    [sym__env_identifier] = ACTIONS(71),
  },
  [14] = {
    [sym__simple_command] = STATE(113),
    [sym__tmp_command] = STATE(113),
    [sym__iter_command] = STATE(113),
    [sym__pipe_command] = STATE(113),
    [sym_html_disable_command] = STATE(113),
    [sym_html_enable_command] = STATE(113),
    [sym_scr_tts_command] = STATE(113),
    [sym_pipe_command] = STATE(113),
    [sym_iter_flags_command] = STATE(113),
    [sym_iter_dbta_command] = STATE(113),
    [sym_iter_dbtb_command] = STATE(113),
    [sym_iter_dbts_command] = STATE(113),
    [sym_iter_file_lines_command] = STATE(113),
    [sym_iter_offsets_command] = STATE(113),
    [sym_iter_sdbquery_command] = STATE(113),
    [sym_iter_threads_command] = STATE(113),
    [sym_iter_bbs_command] = STATE(113),
    [sym_iter_instrs_command] = STATE(113),
    [sym_iter_sections_command] = STATE(113),
    [sym_iter_functions_command] = STATE(113),
    [sym_iter_step_command] = STATE(113),
    [sym_iter_interpret_command] = STATE(113),
    [sym_tmp_seek_command] = STATE(113),
    [sym_tmp_blksz_command] = STATE(113),
    [sym_tmp_fromto_command] = STATE(113),
    [sym_tmp_arch_command] = STATE(113),
    [sym_tmp_bits_command] = STATE(113),
    [sym_tmp_nthi_command] = STATE(113),
    [sym_tmp_eval_command] = STATE(113),
    [sym_tmp_fs_command] = STATE(113),
    [sym_tmp_reli_command] = STATE(113),
    [sym_tmp_kuery_command] = STATE(113),
    [sym_tmp_fd_command] = STATE(113),
    [sym_tmp_reg_command] = STATE(113),
    [sym_tmp_file_command] = STATE(113),
    [sym_tmp_string_command] = STATE(113),
    [sym_tmp_hex_command] = STATE(113),
    [sym_arged_command] = STATE(113),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(113),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [15] = {
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(114),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [16] = {
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(106),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
  },
  [17] = {
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(17),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [18] = {
    [sym__simple_command] = STATE(104),
    [sym__tmp_command] = STATE(104),
    [sym__iter_command] = STATE(104),
    [sym__pipe_command] = STATE(104),
    [sym_html_disable_command] = STATE(104),
    [sym_html_enable_command] = STATE(104),
    [sym_scr_tts_command] = STATE(104),
    [sym_pipe_command] = STATE(104),
    [sym_iter_flags_command] = STATE(104),
    [sym_iter_dbta_command] = STATE(104),
    [sym_iter_dbtb_command] = STATE(104),
    [sym_iter_dbts_command] = STATE(104),
    [sym_iter_file_lines_command] = STATE(104),
    [sym_iter_offsets_command] = STATE(104),
    [sym_iter_sdbquery_command] = STATE(104),
    [sym_iter_threads_command] = STATE(104),
    [sym_iter_bbs_command] = STATE(104),
    [sym_iter_instrs_command] = STATE(104),
    [sym_iter_sections_command] = STATE(104),
    [sym_iter_functions_command] = STATE(104),
    [sym_iter_step_command] = STATE(104),
    [sym_iter_interpret_command] = STATE(104),
    [sym_tmp_seek_command] = STATE(104),
    [sym_tmp_blksz_command] = STATE(104),
    [sym_tmp_fromto_command] = STATE(104),
    [sym_tmp_arch_command] = STATE(104),
    [sym_tmp_bits_command] = STATE(104),
    [sym_tmp_nthi_command] = STATE(104),
    [sym_tmp_eval_command] = STATE(104),
    [sym_tmp_fs_command] = STATE(104),
    [sym_tmp_reli_command] = STATE(104),
    [sym_tmp_kuery_command] = STATE(104),
    [sym_tmp_fd_command] = STATE(104),
    [sym_tmp_reg_command] = STATE(104),
    [sym_tmp_file_command] = STATE(104),
    [sym_tmp_string_command] = STATE(104),
    [sym_tmp_hex_command] = STATE(104),
    [sym_arged_command] = STATE(104),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(104),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
  },
  [19] = {
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(19),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
  },
  [20] = {
    [sym__simple_command] = STATE(115),
    [sym__tmp_command] = STATE(115),
    [sym__iter_command] = STATE(115),
    [sym__pipe_command] = STATE(115),
    [sym_html_disable_command] = STATE(115),
    [sym_html_enable_command] = STATE(115),
    [sym_scr_tts_command] = STATE(115),
    [sym_pipe_command] = STATE(115),
    [sym_iter_flags_command] = STATE(115),
    [sym_iter_dbta_command] = STATE(115),
    [sym_iter_dbtb_command] = STATE(115),
    [sym_iter_dbts_command] = STATE(115),
    [sym_iter_file_lines_command] = STATE(115),
    [sym_iter_offsets_command] = STATE(115),
    [sym_iter_sdbquery_command] = STATE(115),
    [sym_iter_threads_command] = STATE(115),
    [sym_iter_bbs_command] = STATE(115),
    [sym_iter_instrs_command] = STATE(115),
    [sym_iter_sections_command] = STATE(115),
    [sym_iter_functions_command] = STATE(115),
    [sym_iter_step_command] = STATE(115),
    [sym_iter_interpret_command] = STATE(115),
    [sym_tmp_seek_command] = STATE(115),
    [sym_tmp_blksz_command] = STATE(115),
    [sym_tmp_fromto_command] = STATE(115),
    [sym_tmp_arch_command] = STATE(115),
    [sym_tmp_bits_command] = STATE(115),
    [sym_tmp_nthi_command] = STATE(115),
    [sym_tmp_eval_command] = STATE(115),
    [sym_tmp_fs_command] = STATE(115),
    [sym_tmp_reli_command] = STATE(115),
    [sym_tmp_kuery_command] = STATE(115),
    [sym_tmp_fd_command] = STATE(115),
    [sym_tmp_reg_command] = STATE(115),
    [sym_tmp_file_command] = STATE(115),
    [sym_tmp_string_command] = STATE(115),
    [sym_tmp_hex_command] = STATE(115),
    [sym_arged_command] = STATE(115),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_repeat_command] = STATE(115),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(71),
  },
  [21] = {
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(71),
  },
  [22] = {
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(102),
    [sym__math_arged_command] = STATE(102),
    [sym__pointer_arged_command] = STATE(102),
    [sym__macro_arged_command] = STATE(102),
    [sym__system_command] = STATE(102),
    [sym__interpret_command] = STATE(102),
    [sym__env_command] = STATE(102),
    [sym__last_command] = STATE(102),
    [sym_last_command_identifier] = STATE(95),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(132),
    [sym_repeat_command] = STATE(118),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(69),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym_interpret_identifier_token1] = ACTIONS(27),
    [sym__point_interpret_identifier] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(73),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(79),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(71),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(97),
    [anon_sym_PIPET] = ACTIONS(97),
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(97),
    [anon_sym_AT_ATdbtb] = ACTIONS(97),
    [anon_sym_AT_ATdbts] = ACTIONS(97),
    [anon_sym_AT_AT_DOT] = ACTIONS(97),
    [anon_sym_AT_AT_EQ] = ACTIONS(97),
    [anon_sym_AT_ATk] = ACTIONS(97),
    [anon_sym_AT_ATt] = ACTIONS(97),
    [anon_sym_AT_ATb] = ACTIONS(97),
    [anon_sym_AT_ATi] = ACTIONS(99),
    [anon_sym_AT_ATiS] = ACTIONS(97),
    [anon_sym_AT_ATf] = ACTIONS(97),
    [anon_sym_AT_ATs_COLON] = ACTIONS(97),
    [anon_sym_AT_ATc_COLON] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_AT_BANG] = ACTIONS(97),
    [anon_sym_AT_LPAREN] = ACTIONS(97),
    [anon_sym_ATa_COLON] = ACTIONS(97),
    [anon_sym_ATb_COLON] = ACTIONS(97),
    [anon_sym_ATB_COLON] = ACTIONS(97),
    [anon_sym_ATe_COLON] = ACTIONS(97),
    [anon_sym_ATF_COLON] = ACTIONS(97),
    [anon_sym_ATi_COLON] = ACTIONS(97),
    [anon_sym_ATk_COLON] = ACTIONS(97),
    [anon_sym_ATo_COLON] = ACTIONS(97),
    [anon_sym_ATr_COLON] = ACTIONS(97),
    [anon_sym_ATf_COLON] = ACTIONS(97),
    [anon_sym_ATs_COLON] = ACTIONS(97),
    [anon_sym_ATx_COLON] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [anon_sym_DOT_DASH] = ACTIONS(103),
    [anon_sym_DOT_BANG] = ACTIONS(101),
    [anon_sym_DOT_LPAREN] = ACTIONS(101),
    [anon_sym_DOT_SLASH] = ACTIONS(101),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(103),
    [aux_sym_interpret_identifier_token1] = ACTIONS(101),
    [sym__point_interpret_identifier] = ACTIONS(103),
    [sym_system_identifier] = ACTIONS(101),
    [sym_pointer_identifier] = ACTIONS(101),
    [sym_macro_identifier] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_1_GT] = ACTIONS(99),
    [anon_sym_2_GT] = ACTIONS(99),
    [anon_sym_H_GT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_1_GT_GT] = ACTIONS(97),
    [anon_sym_2_GT_GT] = ACTIONS(97),
    [sym_number] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
  },
  [24] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_PIPEH] = ACTIONS(110),
    [anon_sym_PIPET] = ACTIONS(110),
    [anon_sym_AT_AT] = ACTIONS(110),
    [anon_sym_AT_ATdbt] = ACTIONS(110),
    [anon_sym_AT_ATdbta] = ACTIONS(110),
    [anon_sym_AT_ATdbtb] = ACTIONS(110),
    [anon_sym_AT_ATdbts] = ACTIONS(110),
    [anon_sym_AT_AT_DOT] = ACTIONS(110),
    [anon_sym_AT_AT_EQ] = ACTIONS(110),
    [anon_sym_AT_ATk] = ACTIONS(110),
    [anon_sym_AT_ATt] = ACTIONS(110),
    [anon_sym_AT_ATb] = ACTIONS(110),
    [anon_sym_AT_ATi] = ACTIONS(110),
    [anon_sym_AT_ATiS] = ACTIONS(110),
    [anon_sym_AT_ATf] = ACTIONS(110),
    [anon_sym_AT_ATs_COLON] = ACTIONS(110),
    [anon_sym_AT_ATc_COLON] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_AT_BANG] = ACTIONS(110),
    [anon_sym_AT_LPAREN] = ACTIONS(110),
    [anon_sym_ATa_COLON] = ACTIONS(110),
    [anon_sym_ATb_COLON] = ACTIONS(110),
    [anon_sym_ATB_COLON] = ACTIONS(110),
    [anon_sym_ATe_COLON] = ACTIONS(110),
    [anon_sym_ATF_COLON] = ACTIONS(110),
    [anon_sym_ATi_COLON] = ACTIONS(110),
    [anon_sym_ATk_COLON] = ACTIONS(110),
    [anon_sym_ATo_COLON] = ACTIONS(110),
    [anon_sym_ATr_COLON] = ACTIONS(110),
    [anon_sym_ATf_COLON] = ACTIONS(110),
    [anon_sym_ATs_COLON] = ACTIONS(110),
    [anon_sym_ATx_COLON] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_1_GT] = ACTIONS(110),
    [anon_sym_2_GT] = ACTIONS(110),
    [anon_sym_H_GT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_1_GT_GT] = ACTIONS(110),
    [anon_sym_2_GT_GT] = ACTIONS(110),
    [aux_sym_arg_identifier_token1] = ACTIONS(112),
    [aux_sym_arg_identifier_token2] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(110),
    [anon_sym_CR] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
  },
  [25] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_PIPEH] = ACTIONS(128),
    [anon_sym_PIPET] = ACTIONS(128),
    [anon_sym_AT_AT] = ACTIONS(128),
    [anon_sym_AT_ATdbt] = ACTIONS(128),
    [anon_sym_AT_ATdbta] = ACTIONS(128),
    [anon_sym_AT_ATdbtb] = ACTIONS(128),
    [anon_sym_AT_ATdbts] = ACTIONS(128),
    [anon_sym_AT_AT_DOT] = ACTIONS(128),
    [anon_sym_AT_AT_EQ] = ACTIONS(128),
    [anon_sym_AT_ATk] = ACTIONS(128),
    [anon_sym_AT_ATt] = ACTIONS(128),
    [anon_sym_AT_ATb] = ACTIONS(128),
    [anon_sym_AT_ATi] = ACTIONS(128),
    [anon_sym_AT_ATiS] = ACTIONS(128),
    [anon_sym_AT_ATf] = ACTIONS(128),
    [anon_sym_AT_ATs_COLON] = ACTIONS(128),
    [anon_sym_AT_ATc_COLON] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_AT_BANG] = ACTIONS(128),
    [anon_sym_AT_LPAREN] = ACTIONS(128),
    [anon_sym_ATa_COLON] = ACTIONS(128),
    [anon_sym_ATb_COLON] = ACTIONS(128),
    [anon_sym_ATB_COLON] = ACTIONS(128),
    [anon_sym_ATe_COLON] = ACTIONS(128),
    [anon_sym_ATF_COLON] = ACTIONS(128),
    [anon_sym_ATi_COLON] = ACTIONS(128),
    [anon_sym_ATk_COLON] = ACTIONS(128),
    [anon_sym_ATo_COLON] = ACTIONS(128),
    [anon_sym_ATr_COLON] = ACTIONS(128),
    [anon_sym_ATf_COLON] = ACTIONS(128),
    [anon_sym_ATs_COLON] = ACTIONS(128),
    [anon_sym_ATx_COLON] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_1_GT] = ACTIONS(128),
    [anon_sym_2_GT] = ACTIONS(128),
    [anon_sym_H_GT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_1_GT_GT] = ACTIONS(128),
    [anon_sym_2_GT_GT] = ACTIONS(128),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_CR] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
  },
  [26] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_BANG] = ACTIONS(140),
    [anon_sym_AT_LPAREN] = ACTIONS(140),
    [anon_sym_ATa_COLON] = ACTIONS(140),
    [anon_sym_ATb_COLON] = ACTIONS(140),
    [anon_sym_ATB_COLON] = ACTIONS(140),
    [anon_sym_ATe_COLON] = ACTIONS(140),
    [anon_sym_ATF_COLON] = ACTIONS(140),
    [anon_sym_ATi_COLON] = ACTIONS(140),
    [anon_sym_ATk_COLON] = ACTIONS(140),
    [anon_sym_ATo_COLON] = ACTIONS(140),
    [anon_sym_ATr_COLON] = ACTIONS(140),
    [anon_sym_ATf_COLON] = ACTIONS(140),
    [anon_sym_ATs_COLON] = ACTIONS(140),
    [anon_sym_ATx_COLON] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_1_GT] = ACTIONS(140),
    [anon_sym_2_GT] = ACTIONS(140),
    [anon_sym_H_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_1_GT_GT] = ACTIONS(140),
    [anon_sym_2_GT_GT] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [27] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(144),
    [anon_sym_AT_LPAREN] = ACTIONS(144),
    [anon_sym_ATa_COLON] = ACTIONS(144),
    [anon_sym_ATb_COLON] = ACTIONS(144),
    [anon_sym_ATB_COLON] = ACTIONS(144),
    [anon_sym_ATe_COLON] = ACTIONS(144),
    [anon_sym_ATF_COLON] = ACTIONS(144),
    [anon_sym_ATi_COLON] = ACTIONS(144),
    [anon_sym_ATk_COLON] = ACTIONS(144),
    [anon_sym_ATo_COLON] = ACTIONS(144),
    [anon_sym_ATr_COLON] = ACTIONS(144),
    [anon_sym_ATf_COLON] = ACTIONS(144),
    [anon_sym_ATs_COLON] = ACTIONS(144),
    [anon_sym_ATx_COLON] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_1_GT_GT] = ACTIONS(144),
    [anon_sym_2_GT_GT] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [28] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(148),
    [anon_sym_AT_ATdbt] = ACTIONS(148),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(148),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_AT_BANG] = ACTIONS(148),
    [anon_sym_AT_LPAREN] = ACTIONS(148),
    [anon_sym_ATa_COLON] = ACTIONS(148),
    [anon_sym_ATb_COLON] = ACTIONS(148),
    [anon_sym_ATB_COLON] = ACTIONS(148),
    [anon_sym_ATe_COLON] = ACTIONS(148),
    [anon_sym_ATF_COLON] = ACTIONS(148),
    [anon_sym_ATi_COLON] = ACTIONS(148),
    [anon_sym_ATk_COLON] = ACTIONS(148),
    [anon_sym_ATo_COLON] = ACTIONS(148),
    [anon_sym_ATr_COLON] = ACTIONS(148),
    [anon_sym_ATf_COLON] = ACTIONS(148),
    [anon_sym_ATs_COLON] = ACTIONS(148),
    [anon_sym_ATx_COLON] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_1_GT] = ACTIONS(148),
    [anon_sym_2_GT] = ACTIONS(148),
    [anon_sym_H_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [anon_sym_1_GT_GT] = ACTIONS(148),
    [anon_sym_2_GT_GT] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [29] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(152),
    [anon_sym_AT_LPAREN] = ACTIONS(152),
    [anon_sym_ATa_COLON] = ACTIONS(152),
    [anon_sym_ATb_COLON] = ACTIONS(152),
    [anon_sym_ATB_COLON] = ACTIONS(152),
    [anon_sym_ATe_COLON] = ACTIONS(152),
    [anon_sym_ATF_COLON] = ACTIONS(152),
    [anon_sym_ATi_COLON] = ACTIONS(152),
    [anon_sym_ATk_COLON] = ACTIONS(152),
    [anon_sym_ATo_COLON] = ACTIONS(152),
    [anon_sym_ATr_COLON] = ACTIONS(152),
    [anon_sym_ATf_COLON] = ACTIONS(152),
    [anon_sym_ATs_COLON] = ACTIONS(152),
    [anon_sym_ATx_COLON] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_1_GT_GT] = ACTIONS(152),
    [anon_sym_2_GT_GT] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [30] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_PIPEH] = ACTIONS(156),
    [anon_sym_PIPET] = ACTIONS(156),
    [anon_sym_AT_AT] = ACTIONS(156),
    [anon_sym_AT_ATdbt] = ACTIONS(156),
    [anon_sym_AT_ATdbta] = ACTIONS(156),
    [anon_sym_AT_ATdbtb] = ACTIONS(156),
    [anon_sym_AT_ATdbts] = ACTIONS(156),
    [anon_sym_AT_AT_DOT] = ACTIONS(156),
    [anon_sym_AT_AT_EQ] = ACTIONS(156),
    [anon_sym_AT_ATk] = ACTIONS(156),
    [anon_sym_AT_ATt] = ACTIONS(156),
    [anon_sym_AT_ATb] = ACTIONS(156),
    [anon_sym_AT_ATi] = ACTIONS(156),
    [anon_sym_AT_ATiS] = ACTIONS(156),
    [anon_sym_AT_ATf] = ACTIONS(156),
    [anon_sym_AT_ATs_COLON] = ACTIONS(156),
    [anon_sym_AT_ATc_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_AT_BANG] = ACTIONS(156),
    [anon_sym_AT_LPAREN] = ACTIONS(156),
    [anon_sym_ATa_COLON] = ACTIONS(156),
    [anon_sym_ATb_COLON] = ACTIONS(156),
    [anon_sym_ATB_COLON] = ACTIONS(156),
    [anon_sym_ATe_COLON] = ACTIONS(156),
    [anon_sym_ATF_COLON] = ACTIONS(156),
    [anon_sym_ATi_COLON] = ACTIONS(156),
    [anon_sym_ATk_COLON] = ACTIONS(156),
    [anon_sym_ATo_COLON] = ACTIONS(156),
    [anon_sym_ATr_COLON] = ACTIONS(156),
    [anon_sym_ATf_COLON] = ACTIONS(156),
    [anon_sym_ATs_COLON] = ACTIONS(156),
    [anon_sym_ATx_COLON] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_1_GT] = ACTIONS(156),
    [anon_sym_2_GT] = ACTIONS(156),
    [anon_sym_H_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_1_GT_GT] = ACTIONS(156),
    [anon_sym_2_GT_GT] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [31] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_PIPEH] = ACTIONS(128),
    [anon_sym_PIPET] = ACTIONS(128),
    [anon_sym_AT_AT] = ACTIONS(128),
    [anon_sym_AT_ATdbt] = ACTIONS(128),
    [anon_sym_AT_ATdbta] = ACTIONS(128),
    [anon_sym_AT_ATdbtb] = ACTIONS(128),
    [anon_sym_AT_ATdbts] = ACTIONS(128),
    [anon_sym_AT_AT_DOT] = ACTIONS(128),
    [anon_sym_AT_AT_EQ] = ACTIONS(128),
    [anon_sym_AT_ATk] = ACTIONS(128),
    [anon_sym_AT_ATt] = ACTIONS(128),
    [anon_sym_AT_ATb] = ACTIONS(128),
    [anon_sym_AT_ATi] = ACTIONS(128),
    [anon_sym_AT_ATiS] = ACTIONS(128),
    [anon_sym_AT_ATf] = ACTIONS(128),
    [anon_sym_AT_ATs_COLON] = ACTIONS(128),
    [anon_sym_AT_ATc_COLON] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_AT_BANG] = ACTIONS(128),
    [anon_sym_AT_LPAREN] = ACTIONS(128),
    [anon_sym_ATa_COLON] = ACTIONS(128),
    [anon_sym_ATb_COLON] = ACTIONS(128),
    [anon_sym_ATB_COLON] = ACTIONS(128),
    [anon_sym_ATe_COLON] = ACTIONS(128),
    [anon_sym_ATF_COLON] = ACTIONS(128),
    [anon_sym_ATi_COLON] = ACTIONS(128),
    [anon_sym_ATk_COLON] = ACTIONS(128),
    [anon_sym_ATo_COLON] = ACTIONS(128),
    [anon_sym_ATr_COLON] = ACTIONS(128),
    [anon_sym_ATf_COLON] = ACTIONS(128),
    [anon_sym_ATs_COLON] = ACTIONS(128),
    [anon_sym_ATx_COLON] = ACTIONS(128),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_1_GT] = ACTIONS(128),
    [anon_sym_2_GT] = ACTIONS(128),
    [anon_sym_H_GT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_1_GT_GT] = ACTIONS(128),
    [anon_sym_2_GT_GT] = ACTIONS(128),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(128),
  },
  [32] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(152),
    [anon_sym_AT_LPAREN] = ACTIONS(152),
    [anon_sym_ATa_COLON] = ACTIONS(152),
    [anon_sym_ATb_COLON] = ACTIONS(152),
    [anon_sym_ATB_COLON] = ACTIONS(152),
    [anon_sym_ATe_COLON] = ACTIONS(152),
    [anon_sym_ATF_COLON] = ACTIONS(152),
    [anon_sym_ATi_COLON] = ACTIONS(152),
    [anon_sym_ATk_COLON] = ACTIONS(152),
    [anon_sym_ATo_COLON] = ACTIONS(152),
    [anon_sym_ATr_COLON] = ACTIONS(152),
    [anon_sym_ATf_COLON] = ACTIONS(152),
    [anon_sym_ATs_COLON] = ACTIONS(152),
    [anon_sym_ATx_COLON] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_1_GT_GT] = ACTIONS(152),
    [anon_sym_2_GT_GT] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [33] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_BANG] = ACTIONS(140),
    [anon_sym_AT_LPAREN] = ACTIONS(140),
    [anon_sym_ATa_COLON] = ACTIONS(140),
    [anon_sym_ATb_COLON] = ACTIONS(140),
    [anon_sym_ATB_COLON] = ACTIONS(140),
    [anon_sym_ATe_COLON] = ACTIONS(140),
    [anon_sym_ATF_COLON] = ACTIONS(140),
    [anon_sym_ATi_COLON] = ACTIONS(140),
    [anon_sym_ATk_COLON] = ACTIONS(140),
    [anon_sym_ATo_COLON] = ACTIONS(140),
    [anon_sym_ATr_COLON] = ACTIONS(140),
    [anon_sym_ATf_COLON] = ACTIONS(140),
    [anon_sym_ATs_COLON] = ACTIONS(140),
    [anon_sym_ATx_COLON] = ACTIONS(140),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_1_GT] = ACTIONS(140),
    [anon_sym_2_GT] = ACTIONS(140),
    [anon_sym_H_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_1_GT_GT] = ACTIONS(140),
    [anon_sym_2_GT_GT] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [34] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_PIPEH] = ACTIONS(156),
    [anon_sym_PIPET] = ACTIONS(156),
    [anon_sym_AT_AT] = ACTIONS(156),
    [anon_sym_AT_ATdbt] = ACTIONS(156),
    [anon_sym_AT_ATdbta] = ACTIONS(156),
    [anon_sym_AT_ATdbtb] = ACTIONS(156),
    [anon_sym_AT_ATdbts] = ACTIONS(156),
    [anon_sym_AT_AT_DOT] = ACTIONS(156),
    [anon_sym_AT_AT_EQ] = ACTIONS(156),
    [anon_sym_AT_ATk] = ACTIONS(156),
    [anon_sym_AT_ATt] = ACTIONS(156),
    [anon_sym_AT_ATb] = ACTIONS(156),
    [anon_sym_AT_ATi] = ACTIONS(156),
    [anon_sym_AT_ATiS] = ACTIONS(156),
    [anon_sym_AT_ATf] = ACTIONS(156),
    [anon_sym_AT_ATs_COLON] = ACTIONS(156),
    [anon_sym_AT_ATc_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_AT_BANG] = ACTIONS(156),
    [anon_sym_AT_LPAREN] = ACTIONS(156),
    [anon_sym_ATa_COLON] = ACTIONS(156),
    [anon_sym_ATb_COLON] = ACTIONS(156),
    [anon_sym_ATB_COLON] = ACTIONS(156),
    [anon_sym_ATe_COLON] = ACTIONS(156),
    [anon_sym_ATF_COLON] = ACTIONS(156),
    [anon_sym_ATi_COLON] = ACTIONS(156),
    [anon_sym_ATk_COLON] = ACTIONS(156),
    [anon_sym_ATo_COLON] = ACTIONS(156),
    [anon_sym_ATr_COLON] = ACTIONS(156),
    [anon_sym_ATf_COLON] = ACTIONS(156),
    [anon_sym_ATs_COLON] = ACTIONS(156),
    [anon_sym_ATx_COLON] = ACTIONS(156),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_1_GT] = ACTIONS(156),
    [anon_sym_2_GT] = ACTIONS(156),
    [anon_sym_H_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_1_GT_GT] = ACTIONS(156),
    [anon_sym_2_GT_GT] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [35] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(144),
    [anon_sym_AT_LPAREN] = ACTIONS(144),
    [anon_sym_ATa_COLON] = ACTIONS(144),
    [anon_sym_ATb_COLON] = ACTIONS(144),
    [anon_sym_ATB_COLON] = ACTIONS(144),
    [anon_sym_ATe_COLON] = ACTIONS(144),
    [anon_sym_ATF_COLON] = ACTIONS(144),
    [anon_sym_ATi_COLON] = ACTIONS(144),
    [anon_sym_ATk_COLON] = ACTIONS(144),
    [anon_sym_ATo_COLON] = ACTIONS(144),
    [anon_sym_ATr_COLON] = ACTIONS(144),
    [anon_sym_ATf_COLON] = ACTIONS(144),
    [anon_sym_ATs_COLON] = ACTIONS(144),
    [anon_sym_ATx_COLON] = ACTIONS(144),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_1_GT_GT] = ACTIONS(144),
    [anon_sym_2_GT_GT] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [36] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(148),
    [anon_sym_AT_ATdbt] = ACTIONS(148),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(148),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_AT_BANG] = ACTIONS(148),
    [anon_sym_AT_LPAREN] = ACTIONS(148),
    [anon_sym_ATa_COLON] = ACTIONS(148),
    [anon_sym_ATb_COLON] = ACTIONS(148),
    [anon_sym_ATB_COLON] = ACTIONS(148),
    [anon_sym_ATe_COLON] = ACTIONS(148),
    [anon_sym_ATF_COLON] = ACTIONS(148),
    [anon_sym_ATi_COLON] = ACTIONS(148),
    [anon_sym_ATk_COLON] = ACTIONS(148),
    [anon_sym_ATo_COLON] = ACTIONS(148),
    [anon_sym_ATr_COLON] = ACTIONS(148),
    [anon_sym_ATf_COLON] = ACTIONS(148),
    [anon_sym_ATs_COLON] = ACTIONS(148),
    [anon_sym_ATx_COLON] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_1_GT] = ACTIONS(148),
    [anon_sym_2_GT] = ACTIONS(148),
    [anon_sym_H_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [anon_sym_1_GT_GT] = ACTIONS(148),
    [anon_sym_2_GT_GT] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_PIPEH] = ACTIONS(160),
    [anon_sym_PIPET] = ACTIONS(160),
    [anon_sym_AT_AT] = ACTIONS(160),
    [anon_sym_AT_ATdbt] = ACTIONS(160),
    [anon_sym_AT_ATdbta] = ACTIONS(160),
    [anon_sym_AT_ATdbtb] = ACTIONS(160),
    [anon_sym_AT_ATdbts] = ACTIONS(160),
    [anon_sym_AT_AT_DOT] = ACTIONS(160),
    [anon_sym_AT_AT_EQ] = ACTIONS(160),
    [anon_sym_AT_ATk] = ACTIONS(160),
    [anon_sym_AT_ATt] = ACTIONS(160),
    [anon_sym_AT_ATb] = ACTIONS(160),
    [anon_sym_AT_ATi] = ACTIONS(160),
    [anon_sym_AT_ATiS] = ACTIONS(160),
    [anon_sym_AT_ATf] = ACTIONS(160),
    [anon_sym_AT_ATs_COLON] = ACTIONS(160),
    [anon_sym_AT_ATc_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_AT_BANG] = ACTIONS(160),
    [anon_sym_AT_LPAREN] = ACTIONS(160),
    [anon_sym_ATa_COLON] = ACTIONS(160),
    [anon_sym_ATb_COLON] = ACTIONS(160),
    [anon_sym_ATB_COLON] = ACTIONS(160),
    [anon_sym_ATe_COLON] = ACTIONS(160),
    [anon_sym_ATF_COLON] = ACTIONS(160),
    [anon_sym_ATi_COLON] = ACTIONS(160),
    [anon_sym_ATk_COLON] = ACTIONS(160),
    [anon_sym_ATo_COLON] = ACTIONS(160),
    [anon_sym_ATr_COLON] = ACTIONS(160),
    [anon_sym_ATf_COLON] = ACTIONS(160),
    [anon_sym_ATs_COLON] = ACTIONS(160),
    [anon_sym_ATx_COLON] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_1_GT] = ACTIONS(160),
    [anon_sym_2_GT] = ACTIONS(160),
    [anon_sym_H_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(160),
    [anon_sym_1_GT_GT] = ACTIONS(160),
    [anon_sym_2_GT_GT] = ACTIONS(160),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(164),
    [anon_sym_PIPET] = ACTIONS(164),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(164),
    [anon_sym_AT_ATdbtb] = ACTIONS(164),
    [anon_sym_AT_ATdbts] = ACTIONS(164),
    [anon_sym_AT_AT_DOT] = ACTIONS(164),
    [anon_sym_AT_AT_EQ] = ACTIONS(164),
    [anon_sym_AT_ATk] = ACTIONS(164),
    [anon_sym_AT_ATt] = ACTIONS(164),
    [anon_sym_AT_ATb] = ACTIONS(164),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(164),
    [anon_sym_AT_ATf] = ACTIONS(164),
    [anon_sym_AT_ATs_COLON] = ACTIONS(164),
    [anon_sym_AT_ATc_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(164),
    [anon_sym_AT_LPAREN] = ACTIONS(164),
    [anon_sym_ATa_COLON] = ACTIONS(164),
    [anon_sym_ATb_COLON] = ACTIONS(164),
    [anon_sym_ATB_COLON] = ACTIONS(164),
    [anon_sym_ATe_COLON] = ACTIONS(164),
    [anon_sym_ATF_COLON] = ACTIONS(164),
    [anon_sym_ATi_COLON] = ACTIONS(164),
    [anon_sym_ATk_COLON] = ACTIONS(164),
    [anon_sym_ATo_COLON] = ACTIONS(164),
    [anon_sym_ATr_COLON] = ACTIONS(164),
    [anon_sym_ATf_COLON] = ACTIONS(164),
    [anon_sym_ATs_COLON] = ACTIONS(164),
    [anon_sym_ATx_COLON] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [anon_sym_1_GT_GT] = ACTIONS(164),
    [anon_sym_2_GT_GT] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(164),
    [anon_sym_PIPET] = ACTIONS(164),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(164),
    [anon_sym_AT_ATdbtb] = ACTIONS(164),
    [anon_sym_AT_ATdbts] = ACTIONS(164),
    [anon_sym_AT_AT_DOT] = ACTIONS(164),
    [anon_sym_AT_AT_EQ] = ACTIONS(164),
    [anon_sym_AT_ATk] = ACTIONS(164),
    [anon_sym_AT_ATt] = ACTIONS(164),
    [anon_sym_AT_ATb] = ACTIONS(164),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(164),
    [anon_sym_AT_ATf] = ACTIONS(164),
    [anon_sym_AT_ATs_COLON] = ACTIONS(164),
    [anon_sym_AT_ATc_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(164),
    [anon_sym_AT_LPAREN] = ACTIONS(164),
    [anon_sym_ATa_COLON] = ACTIONS(164),
    [anon_sym_ATb_COLON] = ACTIONS(164),
    [anon_sym_ATB_COLON] = ACTIONS(164),
    [anon_sym_ATe_COLON] = ACTIONS(164),
    [anon_sym_ATF_COLON] = ACTIONS(164),
    [anon_sym_ATi_COLON] = ACTIONS(164),
    [anon_sym_ATk_COLON] = ACTIONS(164),
    [anon_sym_ATo_COLON] = ACTIONS(164),
    [anon_sym_ATr_COLON] = ACTIONS(164),
    [anon_sym_ATf_COLON] = ACTIONS(164),
    [anon_sym_ATs_COLON] = ACTIONS(164),
    [anon_sym_ATx_COLON] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [anon_sym_1_GT_GT] = ACTIONS(164),
    [anon_sym_2_GT_GT] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_PIPEH] = ACTIONS(168),
    [anon_sym_PIPET] = ACTIONS(168),
    [anon_sym_AT_AT] = ACTIONS(168),
    [anon_sym_AT_ATdbt] = ACTIONS(168),
    [anon_sym_AT_ATdbta] = ACTIONS(168),
    [anon_sym_AT_ATdbtb] = ACTIONS(168),
    [anon_sym_AT_ATdbts] = ACTIONS(168),
    [anon_sym_AT_AT_DOT] = ACTIONS(168),
    [anon_sym_AT_AT_EQ] = ACTIONS(168),
    [anon_sym_AT_ATk] = ACTIONS(168),
    [anon_sym_AT_ATt] = ACTIONS(168),
    [anon_sym_AT_ATb] = ACTIONS(168),
    [anon_sym_AT_ATi] = ACTIONS(168),
    [anon_sym_AT_ATiS] = ACTIONS(168),
    [anon_sym_AT_ATf] = ACTIONS(168),
    [anon_sym_AT_ATs_COLON] = ACTIONS(168),
    [anon_sym_AT_ATc_COLON] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_AT_BANG] = ACTIONS(168),
    [anon_sym_AT_LPAREN] = ACTIONS(168),
    [anon_sym_ATa_COLON] = ACTIONS(168),
    [anon_sym_ATb_COLON] = ACTIONS(168),
    [anon_sym_ATB_COLON] = ACTIONS(168),
    [anon_sym_ATe_COLON] = ACTIONS(168),
    [anon_sym_ATF_COLON] = ACTIONS(168),
    [anon_sym_ATi_COLON] = ACTIONS(168),
    [anon_sym_ATk_COLON] = ACTIONS(168),
    [anon_sym_ATo_COLON] = ACTIONS(168),
    [anon_sym_ATr_COLON] = ACTIONS(168),
    [anon_sym_ATf_COLON] = ACTIONS(168),
    [anon_sym_ATs_COLON] = ACTIONS(168),
    [anon_sym_ATx_COLON] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_1_GT] = ACTIONS(168),
    [anon_sym_2_GT] = ACTIONS(168),
    [anon_sym_H_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(168),
    [anon_sym_1_GT_GT] = ACTIONS(168),
    [anon_sym_2_GT_GT] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_PIPEH] = ACTIONS(172),
    [anon_sym_PIPET] = ACTIONS(172),
    [anon_sym_AT_AT] = ACTIONS(172),
    [anon_sym_AT_ATdbt] = ACTIONS(172),
    [anon_sym_AT_ATdbta] = ACTIONS(172),
    [anon_sym_AT_ATdbtb] = ACTIONS(172),
    [anon_sym_AT_ATdbts] = ACTIONS(172),
    [anon_sym_AT_AT_DOT] = ACTIONS(172),
    [anon_sym_AT_AT_EQ] = ACTIONS(172),
    [anon_sym_AT_ATk] = ACTIONS(172),
    [anon_sym_AT_ATt] = ACTIONS(172),
    [anon_sym_AT_ATb] = ACTIONS(172),
    [anon_sym_AT_ATi] = ACTIONS(172),
    [anon_sym_AT_ATiS] = ACTIONS(172),
    [anon_sym_AT_ATf] = ACTIONS(172),
    [anon_sym_AT_ATs_COLON] = ACTIONS(172),
    [anon_sym_AT_ATc_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_AT_BANG] = ACTIONS(172),
    [anon_sym_AT_LPAREN] = ACTIONS(172),
    [anon_sym_ATa_COLON] = ACTIONS(172),
    [anon_sym_ATb_COLON] = ACTIONS(172),
    [anon_sym_ATB_COLON] = ACTIONS(172),
    [anon_sym_ATe_COLON] = ACTIONS(172),
    [anon_sym_ATF_COLON] = ACTIONS(172),
    [anon_sym_ATi_COLON] = ACTIONS(172),
    [anon_sym_ATk_COLON] = ACTIONS(172),
    [anon_sym_ATo_COLON] = ACTIONS(172),
    [anon_sym_ATr_COLON] = ACTIONS(172),
    [anon_sym_ATf_COLON] = ACTIONS(172),
    [anon_sym_ATs_COLON] = ACTIONS(172),
    [anon_sym_ATx_COLON] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_1_GT] = ACTIONS(172),
    [anon_sym_2_GT] = ACTIONS(172),
    [anon_sym_H_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_1_GT_GT] = ACTIONS(172),
    [anon_sym_2_GT_GT] = ACTIONS(172),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [42] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_PIPEH] = ACTIONS(174),
    [anon_sym_PIPET] = ACTIONS(174),
    [anon_sym_AT_AT] = ACTIONS(176),
    [anon_sym_AT_ATdbt] = ACTIONS(176),
    [anon_sym_AT_ATdbta] = ACTIONS(174),
    [anon_sym_AT_ATdbtb] = ACTIONS(174),
    [anon_sym_AT_ATdbts] = ACTIONS(174),
    [anon_sym_AT_AT_DOT] = ACTIONS(174),
    [anon_sym_AT_AT_EQ] = ACTIONS(174),
    [anon_sym_AT_ATk] = ACTIONS(174),
    [anon_sym_AT_ATt] = ACTIONS(174),
    [anon_sym_AT_ATb] = ACTIONS(174),
    [anon_sym_AT_ATi] = ACTIONS(176),
    [anon_sym_AT_ATiS] = ACTIONS(174),
    [anon_sym_AT_ATf] = ACTIONS(174),
    [anon_sym_AT_ATs_COLON] = ACTIONS(174),
    [anon_sym_AT_ATc_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_AT_BANG] = ACTIONS(174),
    [anon_sym_AT_LPAREN] = ACTIONS(174),
    [anon_sym_ATa_COLON] = ACTIONS(174),
    [anon_sym_ATb_COLON] = ACTIONS(174),
    [anon_sym_ATB_COLON] = ACTIONS(174),
    [anon_sym_ATe_COLON] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_ATF_COLON] = ACTIONS(174),
    [anon_sym_ATi_COLON] = ACTIONS(174),
    [anon_sym_ATk_COLON] = ACTIONS(174),
    [anon_sym_ATo_COLON] = ACTIONS(174),
    [anon_sym_ATr_COLON] = ACTIONS(174),
    [anon_sym_ATf_COLON] = ACTIONS(174),
    [anon_sym_ATs_COLON] = ACTIONS(174),
    [anon_sym_ATx_COLON] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_1_GT] = ACTIONS(176),
    [anon_sym_2_GT] = ACTIONS(176),
    [anon_sym_H_GT] = ACTIONS(174),
    [anon_sym_GT_GT] = ACTIONS(174),
    [anon_sym_1_GT_GT] = ACTIONS(174),
    [anon_sym_2_GT_GT] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
  },
  [43] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_PIPEH] = ACTIONS(180),
    [anon_sym_PIPET] = ACTIONS(180),
    [anon_sym_AT_AT] = ACTIONS(182),
    [anon_sym_AT_ATdbt] = ACTIONS(182),
    [anon_sym_AT_ATdbta] = ACTIONS(180),
    [anon_sym_AT_ATdbtb] = ACTIONS(180),
    [anon_sym_AT_ATdbts] = ACTIONS(180),
    [anon_sym_AT_AT_DOT] = ACTIONS(180),
    [anon_sym_AT_AT_EQ] = ACTIONS(180),
    [anon_sym_AT_ATk] = ACTIONS(180),
    [anon_sym_AT_ATt] = ACTIONS(180),
    [anon_sym_AT_ATb] = ACTIONS(180),
    [anon_sym_AT_ATi] = ACTIONS(182),
    [anon_sym_AT_ATiS] = ACTIONS(180),
    [anon_sym_AT_ATf] = ACTIONS(180),
    [anon_sym_AT_ATs_COLON] = ACTIONS(180),
    [anon_sym_AT_ATc_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_AT_BANG] = ACTIONS(180),
    [anon_sym_AT_LPAREN] = ACTIONS(180),
    [anon_sym_ATa_COLON] = ACTIONS(180),
    [anon_sym_ATb_COLON] = ACTIONS(180),
    [anon_sym_ATB_COLON] = ACTIONS(180),
    [anon_sym_ATe_COLON] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_ATF_COLON] = ACTIONS(180),
    [anon_sym_ATi_COLON] = ACTIONS(180),
    [anon_sym_ATk_COLON] = ACTIONS(180),
    [anon_sym_ATo_COLON] = ACTIONS(180),
    [anon_sym_ATr_COLON] = ACTIONS(180),
    [anon_sym_ATf_COLON] = ACTIONS(180),
    [anon_sym_ATs_COLON] = ACTIONS(180),
    [anon_sym_ATx_COLON] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_1_GT] = ACTIONS(182),
    [anon_sym_2_GT] = ACTIONS(182),
    [anon_sym_H_GT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_1_GT_GT] = ACTIONS(180),
    [anon_sym_2_GT_GT] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_PIPEH] = ACTIONS(184),
    [anon_sym_PIPET] = ACTIONS(184),
    [anon_sym_AT_AT] = ACTIONS(186),
    [anon_sym_AT_ATdbt] = ACTIONS(186),
    [anon_sym_AT_ATdbta] = ACTIONS(184),
    [anon_sym_AT_ATdbtb] = ACTIONS(184),
    [anon_sym_AT_ATdbts] = ACTIONS(184),
    [anon_sym_AT_AT_DOT] = ACTIONS(184),
    [anon_sym_AT_AT_EQ] = ACTIONS(184),
    [anon_sym_AT_ATk] = ACTIONS(184),
    [anon_sym_AT_ATt] = ACTIONS(184),
    [anon_sym_AT_ATb] = ACTIONS(184),
    [anon_sym_AT_ATi] = ACTIONS(186),
    [anon_sym_AT_ATiS] = ACTIONS(184),
    [anon_sym_AT_ATf] = ACTIONS(184),
    [anon_sym_AT_ATs_COLON] = ACTIONS(184),
    [anon_sym_AT_ATc_COLON] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_AT_BANG] = ACTIONS(184),
    [anon_sym_AT_LPAREN] = ACTIONS(184),
    [anon_sym_ATa_COLON] = ACTIONS(184),
    [anon_sym_ATb_COLON] = ACTIONS(184),
    [anon_sym_ATB_COLON] = ACTIONS(184),
    [anon_sym_ATe_COLON] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_ATF_COLON] = ACTIONS(184),
    [anon_sym_ATi_COLON] = ACTIONS(184),
    [anon_sym_ATk_COLON] = ACTIONS(184),
    [anon_sym_ATo_COLON] = ACTIONS(184),
    [anon_sym_ATr_COLON] = ACTIONS(184),
    [anon_sym_ATf_COLON] = ACTIONS(184),
    [anon_sym_ATs_COLON] = ACTIONS(184),
    [anon_sym_ATx_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_1_GT] = ACTIONS(186),
    [anon_sym_2_GT] = ACTIONS(186),
    [anon_sym_H_GT] = ACTIONS(184),
    [anon_sym_GT_GT] = ACTIONS(184),
    [anon_sym_1_GT_GT] = ACTIONS(184),
    [anon_sym_2_GT_GT] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPEH] = ACTIONS(191),
    [anon_sym_PIPET] = ACTIONS(191),
    [anon_sym_AT_AT] = ACTIONS(193),
    [anon_sym_AT_ATdbt] = ACTIONS(193),
    [anon_sym_AT_ATdbta] = ACTIONS(191),
    [anon_sym_AT_ATdbtb] = ACTIONS(191),
    [anon_sym_AT_ATdbts] = ACTIONS(191),
    [anon_sym_AT_AT_DOT] = ACTIONS(191),
    [anon_sym_AT_AT_EQ] = ACTIONS(191),
    [anon_sym_AT_ATk] = ACTIONS(191),
    [anon_sym_AT_ATt] = ACTIONS(191),
    [anon_sym_AT_ATb] = ACTIONS(191),
    [anon_sym_AT_ATi] = ACTIONS(193),
    [anon_sym_AT_ATiS] = ACTIONS(191),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(191),
    [anon_sym_AT_ATc_COLON] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_AT_BANG] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(191),
    [anon_sym_ATa_COLON] = ACTIONS(191),
    [anon_sym_ATb_COLON] = ACTIONS(191),
    [anon_sym_ATB_COLON] = ACTIONS(191),
    [anon_sym_ATe_COLON] = ACTIONS(191),
    [anon_sym_ATF_COLON] = ACTIONS(191),
    [anon_sym_ATi_COLON] = ACTIONS(191),
    [anon_sym_ATk_COLON] = ACTIONS(191),
    [anon_sym_ATo_COLON] = ACTIONS(191),
    [anon_sym_ATr_COLON] = ACTIONS(191),
    [anon_sym_ATf_COLON] = ACTIONS(191),
    [anon_sym_ATs_COLON] = ACTIONS(191),
    [anon_sym_ATx_COLON] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_1_GT] = ACTIONS(193),
    [anon_sym_2_GT] = ACTIONS(193),
    [anon_sym_H_GT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_1_GT_GT] = ACTIONS(191),
    [anon_sym_2_GT_GT] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_PIPEH] = ACTIONS(184),
    [anon_sym_PIPET] = ACTIONS(184),
    [anon_sym_AT_AT] = ACTIONS(186),
    [anon_sym_AT_ATdbt] = ACTIONS(186),
    [anon_sym_AT_ATdbta] = ACTIONS(184),
    [anon_sym_AT_ATdbtb] = ACTIONS(184),
    [anon_sym_AT_ATdbts] = ACTIONS(184),
    [anon_sym_AT_AT_DOT] = ACTIONS(184),
    [anon_sym_AT_AT_EQ] = ACTIONS(184),
    [anon_sym_AT_ATk] = ACTIONS(184),
    [anon_sym_AT_ATt] = ACTIONS(184),
    [anon_sym_AT_ATb] = ACTIONS(184),
    [anon_sym_AT_ATi] = ACTIONS(186),
    [anon_sym_AT_ATiS] = ACTIONS(184),
    [anon_sym_AT_ATf] = ACTIONS(184),
    [anon_sym_AT_ATs_COLON] = ACTIONS(184),
    [anon_sym_AT_ATc_COLON] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_AT_BANG] = ACTIONS(184),
    [anon_sym_AT_LPAREN] = ACTIONS(184),
    [anon_sym_ATa_COLON] = ACTIONS(184),
    [anon_sym_ATb_COLON] = ACTIONS(184),
    [anon_sym_ATB_COLON] = ACTIONS(184),
    [anon_sym_ATe_COLON] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_ATF_COLON] = ACTIONS(184),
    [anon_sym_ATi_COLON] = ACTIONS(184),
    [anon_sym_ATk_COLON] = ACTIONS(184),
    [anon_sym_ATo_COLON] = ACTIONS(184),
    [anon_sym_ATr_COLON] = ACTIONS(184),
    [anon_sym_ATf_COLON] = ACTIONS(184),
    [anon_sym_ATs_COLON] = ACTIONS(184),
    [anon_sym_ATx_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_1_GT] = ACTIONS(186),
    [anon_sym_2_GT] = ACTIONS(186),
    [anon_sym_H_GT] = ACTIONS(184),
    [anon_sym_GT_GT] = ACTIONS(184),
    [anon_sym_1_GT_GT] = ACTIONS(184),
    [anon_sym_2_GT_GT] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(197),
    [anon_sym_PIPET] = ACTIONS(197),
    [anon_sym_AT_AT] = ACTIONS(199),
    [anon_sym_AT_ATdbt] = ACTIONS(199),
    [anon_sym_AT_ATdbta] = ACTIONS(197),
    [anon_sym_AT_ATdbtb] = ACTIONS(197),
    [anon_sym_AT_ATdbts] = ACTIONS(197),
    [anon_sym_AT_AT_DOT] = ACTIONS(197),
    [anon_sym_AT_AT_EQ] = ACTIONS(197),
    [anon_sym_AT_ATk] = ACTIONS(197),
    [anon_sym_AT_ATt] = ACTIONS(197),
    [anon_sym_AT_ATb] = ACTIONS(197),
    [anon_sym_AT_ATi] = ACTIONS(199),
    [anon_sym_AT_ATiS] = ACTIONS(197),
    [anon_sym_AT_ATf] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_AT_ATs_COLON] = ACTIONS(197),
    [anon_sym_AT_ATc_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_AT_BANG] = ACTIONS(197),
    [anon_sym_AT_LPAREN] = ACTIONS(197),
    [anon_sym_ATa_COLON] = ACTIONS(197),
    [anon_sym_ATb_COLON] = ACTIONS(197),
    [anon_sym_ATB_COLON] = ACTIONS(197),
    [anon_sym_ATe_COLON] = ACTIONS(197),
    [anon_sym_ATF_COLON] = ACTIONS(197),
    [anon_sym_ATi_COLON] = ACTIONS(197),
    [anon_sym_ATk_COLON] = ACTIONS(197),
    [anon_sym_ATo_COLON] = ACTIONS(197),
    [anon_sym_ATr_COLON] = ACTIONS(197),
    [anon_sym_ATf_COLON] = ACTIONS(197),
    [anon_sym_ATs_COLON] = ACTIONS(197),
    [anon_sym_ATx_COLON] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_1_GT] = ACTIONS(199),
    [anon_sym_2_GT] = ACTIONS(199),
    [anon_sym_H_GT] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_1_GT_GT] = ACTIONS(197),
    [anon_sym_2_GT_GT] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(205),
    [anon_sym_AT_ATdbta] = ACTIONS(203),
    [anon_sym_AT_ATdbtb] = ACTIONS(203),
    [anon_sym_AT_ATdbts] = ACTIONS(203),
    [anon_sym_AT_AT_DOT] = ACTIONS(203),
    [anon_sym_AT_AT_EQ] = ACTIONS(203),
    [anon_sym_AT_ATk] = ACTIONS(203),
    [anon_sym_AT_ATt] = ACTIONS(203),
    [anon_sym_AT_ATb] = ACTIONS(203),
    [anon_sym_AT_ATi] = ACTIONS(205),
    [anon_sym_AT_ATiS] = ACTIONS(203),
    [anon_sym_AT_ATf] = ACTIONS(203),
    [anon_sym_AT_ATs_COLON] = ACTIONS(203),
    [anon_sym_AT_ATc_COLON] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_AT_BANG] = ACTIONS(203),
    [anon_sym_AT_LPAREN] = ACTIONS(203),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(203),
    [anon_sym_ATB_COLON] = ACTIONS(203),
    [anon_sym_ATe_COLON] = ACTIONS(203),
    [anon_sym_ATF_COLON] = ACTIONS(203),
    [anon_sym_ATi_COLON] = ACTIONS(203),
    [anon_sym_ATk_COLON] = ACTIONS(203),
    [anon_sym_ATo_COLON] = ACTIONS(203),
    [anon_sym_ATr_COLON] = ACTIONS(203),
    [anon_sym_ATf_COLON] = ACTIONS(203),
    [anon_sym_ATs_COLON] = ACTIONS(203),
    [anon_sym_ATx_COLON] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_1_GT] = ACTIONS(205),
    [anon_sym_2_GT] = ACTIONS(205),
    [anon_sym_H_GT] = ACTIONS(203),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_1_GT_GT] = ACTIONS(203),
    [anon_sym_2_GT_GT] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(209),
    [anon_sym_AT_AT] = ACTIONS(211),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(209),
    [anon_sym_AT_ATdbts] = ACTIONS(209),
    [anon_sym_AT_AT_DOT] = ACTIONS(209),
    [anon_sym_AT_AT_EQ] = ACTIONS(209),
    [anon_sym_AT_ATk] = ACTIONS(209),
    [anon_sym_AT_ATt] = ACTIONS(209),
    [anon_sym_AT_ATb] = ACTIONS(209),
    [anon_sym_AT_ATi] = ACTIONS(211),
    [anon_sym_AT_ATiS] = ACTIONS(209),
    [anon_sym_AT_ATf] = ACTIONS(209),
    [anon_sym_AT_ATs_COLON] = ACTIONS(209),
    [anon_sym_AT_ATc_COLON] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_AT_BANG] = ACTIONS(209),
    [anon_sym_AT_LPAREN] = ACTIONS(209),
    [anon_sym_ATa_COLON] = ACTIONS(209),
    [anon_sym_ATb_COLON] = ACTIONS(209),
    [anon_sym_ATB_COLON] = ACTIONS(209),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(209),
    [anon_sym_ATi_COLON] = ACTIONS(209),
    [anon_sym_ATk_COLON] = ACTIONS(209),
    [anon_sym_ATo_COLON] = ACTIONS(209),
    [anon_sym_ATr_COLON] = ACTIONS(209),
    [anon_sym_ATf_COLON] = ACTIONS(209),
    [anon_sym_ATs_COLON] = ACTIONS(209),
    [anon_sym_ATx_COLON] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_1_GT] = ACTIONS(211),
    [anon_sym_2_GT] = ACTIONS(211),
    [anon_sym_H_GT] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_1_GT_GT] = ACTIONS(209),
    [anon_sym_2_GT_GT] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(97),
    [anon_sym_PIPET] = ACTIONS(97),
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(97),
    [anon_sym_AT_ATdbtb] = ACTIONS(97),
    [anon_sym_AT_ATdbts] = ACTIONS(97),
    [anon_sym_AT_AT_DOT] = ACTIONS(97),
    [anon_sym_AT_AT_EQ] = ACTIONS(97),
    [anon_sym_AT_ATk] = ACTIONS(97),
    [anon_sym_AT_ATt] = ACTIONS(97),
    [anon_sym_AT_ATb] = ACTIONS(97),
    [anon_sym_AT_ATi] = ACTIONS(99),
    [anon_sym_AT_ATiS] = ACTIONS(97),
    [anon_sym_AT_ATf] = ACTIONS(97),
    [anon_sym_AT_ATs_COLON] = ACTIONS(97),
    [anon_sym_AT_ATc_COLON] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_AT_BANG] = ACTIONS(97),
    [anon_sym_AT_LPAREN] = ACTIONS(97),
    [anon_sym_ATa_COLON] = ACTIONS(97),
    [anon_sym_ATb_COLON] = ACTIONS(97),
    [anon_sym_ATB_COLON] = ACTIONS(97),
    [anon_sym_ATe_COLON] = ACTIONS(97),
    [anon_sym_ATF_COLON] = ACTIONS(97),
    [anon_sym_ATi_COLON] = ACTIONS(97),
    [anon_sym_ATk_COLON] = ACTIONS(97),
    [anon_sym_ATo_COLON] = ACTIONS(97),
    [anon_sym_ATr_COLON] = ACTIONS(97),
    [anon_sym_ATf_COLON] = ACTIONS(97),
    [anon_sym_ATs_COLON] = ACTIONS(97),
    [anon_sym_ATx_COLON] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_1_GT] = ACTIONS(99),
    [anon_sym_2_GT] = ACTIONS(99),
    [anon_sym_H_GT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_1_GT_GT] = ACTIONS(97),
    [anon_sym_2_GT_GT] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_PIPEH] = ACTIONS(213),
    [anon_sym_PIPET] = ACTIONS(213),
    [anon_sym_AT_AT] = ACTIONS(215),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(213),
    [anon_sym_AT_AT_EQ] = ACTIONS(213),
    [anon_sym_AT_ATk] = ACTIONS(213),
    [anon_sym_AT_ATt] = ACTIONS(213),
    [anon_sym_AT_ATb] = ACTIONS(213),
    [anon_sym_AT_ATi] = ACTIONS(215),
    [anon_sym_AT_ATiS] = ACTIONS(213),
    [anon_sym_AT_ATf] = ACTIONS(213),
    [anon_sym_AT_ATs_COLON] = ACTIONS(213),
    [anon_sym_AT_ATc_COLON] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(215),
    [anon_sym_AT_BANG] = ACTIONS(213),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_ATa_COLON] = ACTIONS(213),
    [anon_sym_ATb_COLON] = ACTIONS(213),
    [anon_sym_ATB_COLON] = ACTIONS(213),
    [anon_sym_ATe_COLON] = ACTIONS(213),
    [anon_sym_ATF_COLON] = ACTIONS(213),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(213),
    [anon_sym_ATo_COLON] = ACTIONS(213),
    [anon_sym_ATr_COLON] = ACTIONS(213),
    [anon_sym_ATf_COLON] = ACTIONS(213),
    [anon_sym_ATs_COLON] = ACTIONS(213),
    [anon_sym_ATx_COLON] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_1_GT] = ACTIONS(215),
    [anon_sym_2_GT] = ACTIONS(215),
    [anon_sym_H_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_1_GT_GT] = ACTIONS(213),
    [anon_sym_2_GT_GT] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_CR] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPEH] = ACTIONS(217),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(219),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(217),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(217),
    [anon_sym_AT_ATt] = ACTIONS(217),
    [anon_sym_AT_ATb] = ACTIONS(217),
    [anon_sym_AT_ATi] = ACTIONS(219),
    [anon_sym_AT_ATiS] = ACTIONS(217),
    [anon_sym_AT_ATf] = ACTIONS(217),
    [anon_sym_AT_ATs_COLON] = ACTIONS(217),
    [anon_sym_AT_ATc_COLON] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(219),
    [anon_sym_AT_BANG] = ACTIONS(217),
    [anon_sym_AT_LPAREN] = ACTIONS(217),
    [anon_sym_ATa_COLON] = ACTIONS(217),
    [anon_sym_ATb_COLON] = ACTIONS(217),
    [anon_sym_ATB_COLON] = ACTIONS(217),
    [anon_sym_ATe_COLON] = ACTIONS(217),
    [anon_sym_ATF_COLON] = ACTIONS(217),
    [anon_sym_ATi_COLON] = ACTIONS(217),
    [anon_sym_ATk_COLON] = ACTIONS(217),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(217),
    [anon_sym_ATf_COLON] = ACTIONS(217),
    [anon_sym_ATs_COLON] = ACTIONS(217),
    [anon_sym_ATx_COLON] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_1_GT] = ACTIONS(219),
    [anon_sym_2_GT] = ACTIONS(219),
    [anon_sym_H_GT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_1_GT_GT] = ACTIONS(217),
    [anon_sym_2_GT_GT] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_CR] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_PIPEH] = ACTIONS(221),
    [anon_sym_PIPET] = ACTIONS(221),
    [anon_sym_AT_AT] = ACTIONS(223),
    [anon_sym_AT_ATdbt] = ACTIONS(223),
    [anon_sym_AT_ATdbta] = ACTIONS(221),
    [anon_sym_AT_ATdbtb] = ACTIONS(221),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(221),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(221),
    [anon_sym_AT_ATi] = ACTIONS(223),
    [anon_sym_AT_ATiS] = ACTIONS(221),
    [anon_sym_AT_ATf] = ACTIONS(221),
    [anon_sym_AT_ATs_COLON] = ACTIONS(221),
    [anon_sym_AT_ATc_COLON] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_AT_BANG] = ACTIONS(221),
    [anon_sym_AT_LPAREN] = ACTIONS(221),
    [anon_sym_ATa_COLON] = ACTIONS(221),
    [anon_sym_ATb_COLON] = ACTIONS(221),
    [anon_sym_ATB_COLON] = ACTIONS(221),
    [anon_sym_ATe_COLON] = ACTIONS(221),
    [anon_sym_ATF_COLON] = ACTIONS(221),
    [anon_sym_ATi_COLON] = ACTIONS(221),
    [anon_sym_ATk_COLON] = ACTIONS(221),
    [anon_sym_ATo_COLON] = ACTIONS(221),
    [anon_sym_ATr_COLON] = ACTIONS(221),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(221),
    [anon_sym_ATx_COLON] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_1_GT] = ACTIONS(223),
    [anon_sym_2_GT] = ACTIONS(223),
    [anon_sym_H_GT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_1_GT_GT] = ACTIONS(221),
    [anon_sym_2_GT_GT] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_CR] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPEH] = ACTIONS(225),
    [anon_sym_PIPET] = ACTIONS(225),
    [anon_sym_AT_AT] = ACTIONS(227),
    [anon_sym_AT_ATdbt] = ACTIONS(227),
    [anon_sym_AT_ATdbta] = ACTIONS(225),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(225),
    [anon_sym_AT_AT_DOT] = ACTIONS(225),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(225),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(225),
    [anon_sym_AT_ATf] = ACTIONS(225),
    [anon_sym_AT_ATs_COLON] = ACTIONS(225),
    [anon_sym_AT_ATc_COLON] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_AT_BANG] = ACTIONS(225),
    [anon_sym_AT_LPAREN] = ACTIONS(225),
    [anon_sym_ATa_COLON] = ACTIONS(225),
    [anon_sym_ATb_COLON] = ACTIONS(225),
    [anon_sym_ATB_COLON] = ACTIONS(225),
    [anon_sym_ATe_COLON] = ACTIONS(225),
    [anon_sym_ATF_COLON] = ACTIONS(225),
    [anon_sym_ATi_COLON] = ACTIONS(225),
    [anon_sym_ATk_COLON] = ACTIONS(225),
    [anon_sym_ATo_COLON] = ACTIONS(225),
    [anon_sym_ATr_COLON] = ACTIONS(225),
    [anon_sym_ATf_COLON] = ACTIONS(225),
    [anon_sym_ATs_COLON] = ACTIONS(225),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_1_GT] = ACTIONS(227),
    [anon_sym_2_GT] = ACTIONS(227),
    [anon_sym_H_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_1_GT_GT] = ACTIONS(225),
    [anon_sym_2_GT_GT] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_CR] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPEH] = ACTIONS(229),
    [anon_sym_PIPET] = ACTIONS(229),
    [anon_sym_AT_AT] = ACTIONS(231),
    [anon_sym_AT_ATdbt] = ACTIONS(231),
    [anon_sym_AT_ATdbta] = ACTIONS(229),
    [anon_sym_AT_ATdbtb] = ACTIONS(229),
    [anon_sym_AT_ATdbts] = ACTIONS(229),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(229),
    [anon_sym_AT_ATk] = ACTIONS(229),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(229),
    [anon_sym_AT_ATi] = ACTIONS(231),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(229),
    [anon_sym_AT_ATc_COLON] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_AT_BANG] = ACTIONS(229),
    [anon_sym_AT_LPAREN] = ACTIONS(229),
    [anon_sym_ATa_COLON] = ACTIONS(229),
    [anon_sym_ATb_COLON] = ACTIONS(229),
    [anon_sym_ATB_COLON] = ACTIONS(229),
    [anon_sym_ATe_COLON] = ACTIONS(229),
    [anon_sym_ATF_COLON] = ACTIONS(229),
    [anon_sym_ATi_COLON] = ACTIONS(229),
    [anon_sym_ATk_COLON] = ACTIONS(229),
    [anon_sym_ATo_COLON] = ACTIONS(229),
    [anon_sym_ATr_COLON] = ACTIONS(229),
    [anon_sym_ATf_COLON] = ACTIONS(229),
    [anon_sym_ATs_COLON] = ACTIONS(229),
    [anon_sym_ATx_COLON] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_1_GT] = ACTIONS(231),
    [anon_sym_2_GT] = ACTIONS(231),
    [anon_sym_H_GT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_1_GT_GT] = ACTIONS(229),
    [anon_sym_2_GT_GT] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_CR] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
  },
  [56] = {
    [sym__eq_sep_args] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_PIPET] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT_AT_DOT] = ACTIONS(235),
    [anon_sym_AT_AT_EQ] = ACTIONS(235),
    [anon_sym_AT_ATk] = ACTIONS(235),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(235),
    [anon_sym_AT_ATi] = ACTIONS(235),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(235),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(235),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_ATa_COLON] = ACTIONS(235),
    [anon_sym_ATb_COLON] = ACTIONS(235),
    [anon_sym_ATB_COLON] = ACTIONS(235),
    [anon_sym_ATe_COLON] = ACTIONS(235),
    [anon_sym_ATF_COLON] = ACTIONS(235),
    [anon_sym_ATi_COLON] = ACTIONS(235),
    [anon_sym_ATk_COLON] = ACTIONS(235),
    [anon_sym_ATo_COLON] = ACTIONS(235),
    [anon_sym_ATr_COLON] = ACTIONS(235),
    [anon_sym_ATf_COLON] = ACTIONS(235),
    [anon_sym_ATs_COLON] = ACTIONS(235),
    [anon_sym_ATx_COLON] = ACTIONS(235),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_1_GT] = ACTIONS(235),
    [anon_sym_2_GT] = ACTIONS(235),
    [anon_sym_H_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_1_GT_GT] = ACTIONS(235),
    [anon_sym_2_GT_GT] = ACTIONS(235),
    [sym_eq_sep_key] = ACTIONS(237),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_CR] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPEH] = ACTIONS(239),
    [anon_sym_PIPET] = ACTIONS(239),
    [anon_sym_AT_AT] = ACTIONS(241),
    [anon_sym_AT_ATdbt] = ACTIONS(241),
    [anon_sym_AT_ATdbta] = ACTIONS(239),
    [anon_sym_AT_ATdbtb] = ACTIONS(239),
    [anon_sym_AT_ATdbts] = ACTIONS(239),
    [anon_sym_AT_AT_DOT] = ACTIONS(239),
    [anon_sym_AT_AT_EQ] = ACTIONS(239),
    [anon_sym_AT_ATk] = ACTIONS(239),
    [anon_sym_AT_ATt] = ACTIONS(239),
    [anon_sym_AT_ATb] = ACTIONS(239),
    [anon_sym_AT_ATi] = ACTIONS(241),
    [anon_sym_AT_ATiS] = ACTIONS(239),
    [anon_sym_AT_ATf] = ACTIONS(239),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(239),
    [anon_sym_ATb_COLON] = ACTIONS(239),
    [anon_sym_ATB_COLON] = ACTIONS(239),
    [anon_sym_ATe_COLON] = ACTIONS(239),
    [anon_sym_ATF_COLON] = ACTIONS(239),
    [anon_sym_ATi_COLON] = ACTIONS(239),
    [anon_sym_ATk_COLON] = ACTIONS(239),
    [anon_sym_ATo_COLON] = ACTIONS(239),
    [anon_sym_ATr_COLON] = ACTIONS(239),
    [anon_sym_ATf_COLON] = ACTIONS(239),
    [anon_sym_ATs_COLON] = ACTIONS(239),
    [anon_sym_ATx_COLON] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_1_GT] = ACTIONS(241),
    [anon_sym_2_GT] = ACTIONS(241),
    [anon_sym_H_GT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_1_GT_GT] = ACTIONS(239),
    [anon_sym_2_GT_GT] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_CR] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PIPEH] = ACTIONS(243),
    [anon_sym_PIPET] = ACTIONS(243),
    [anon_sym_AT_AT] = ACTIONS(245),
    [anon_sym_AT_ATdbt] = ACTIONS(245),
    [anon_sym_AT_ATdbta] = ACTIONS(243),
    [anon_sym_AT_ATdbtb] = ACTIONS(243),
    [anon_sym_AT_ATdbts] = ACTIONS(243),
    [anon_sym_AT_AT_DOT] = ACTIONS(243),
    [anon_sym_AT_AT_EQ] = ACTIONS(243),
    [anon_sym_AT_ATk] = ACTIONS(243),
    [anon_sym_AT_ATt] = ACTIONS(243),
    [anon_sym_AT_ATb] = ACTIONS(243),
    [anon_sym_AT_ATi] = ACTIONS(245),
    [anon_sym_AT_ATiS] = ACTIONS(243),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(243),
    [anon_sym_AT_ATc_COLON] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_AT_BANG] = ACTIONS(243),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(243),
    [anon_sym_ATe_COLON] = ACTIONS(243),
    [anon_sym_ATF_COLON] = ACTIONS(243),
    [anon_sym_ATi_COLON] = ACTIONS(243),
    [anon_sym_ATk_COLON] = ACTIONS(243),
    [anon_sym_ATo_COLON] = ACTIONS(243),
    [anon_sym_ATr_COLON] = ACTIONS(243),
    [anon_sym_ATf_COLON] = ACTIONS(243),
    [anon_sym_ATs_COLON] = ACTIONS(243),
    [anon_sym_ATx_COLON] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_1_GT] = ACTIONS(245),
    [anon_sym_2_GT] = ACTIONS(245),
    [anon_sym_H_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_1_GT_GT] = ACTIONS(243),
    [anon_sym_2_GT_GT] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_CR] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPEH] = ACTIONS(247),
    [anon_sym_PIPET] = ACTIONS(247),
    [anon_sym_AT_AT] = ACTIONS(249),
    [anon_sym_AT_ATdbt] = ACTIONS(249),
    [anon_sym_AT_ATdbta] = ACTIONS(247),
    [anon_sym_AT_ATdbtb] = ACTIONS(247),
    [anon_sym_AT_ATdbts] = ACTIONS(247),
    [anon_sym_AT_AT_DOT] = ACTIONS(247),
    [anon_sym_AT_AT_EQ] = ACTIONS(247),
    [anon_sym_AT_ATk] = ACTIONS(247),
    [anon_sym_AT_ATt] = ACTIONS(247),
    [anon_sym_AT_ATb] = ACTIONS(247),
    [anon_sym_AT_ATi] = ACTIONS(249),
    [anon_sym_AT_ATiS] = ACTIONS(247),
    [anon_sym_AT_ATf] = ACTIONS(247),
    [anon_sym_AT_ATs_COLON] = ACTIONS(247),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(247),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(247),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(247),
    [anon_sym_ATi_COLON] = ACTIONS(247),
    [anon_sym_ATk_COLON] = ACTIONS(247),
    [anon_sym_ATo_COLON] = ACTIONS(247),
    [anon_sym_ATr_COLON] = ACTIONS(247),
    [anon_sym_ATf_COLON] = ACTIONS(247),
    [anon_sym_ATs_COLON] = ACTIONS(247),
    [anon_sym_ATx_COLON] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_1_GT] = ACTIONS(249),
    [anon_sym_2_GT] = ACTIONS(249),
    [anon_sym_H_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_1_GT_GT] = ACTIONS(247),
    [anon_sym_2_GT_GT] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_CR] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
  },
  [60] = {
    [sym_pipe_second_command] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPEH] = ACTIONS(253),
    [anon_sym_PIPET] = ACTIONS(253),
    [anon_sym_AT_AT] = ACTIONS(253),
    [anon_sym_AT_ATdbt] = ACTIONS(253),
    [anon_sym_AT_ATdbta] = ACTIONS(253),
    [anon_sym_AT_ATdbtb] = ACTIONS(253),
    [anon_sym_AT_ATdbts] = ACTIONS(253),
    [anon_sym_AT_AT_DOT] = ACTIONS(253),
    [anon_sym_AT_AT_EQ] = ACTIONS(253),
    [anon_sym_AT_ATk] = ACTIONS(253),
    [anon_sym_AT_ATt] = ACTIONS(253),
    [anon_sym_AT_ATb] = ACTIONS(253),
    [anon_sym_AT_ATi] = ACTIONS(253),
    [anon_sym_AT_ATiS] = ACTIONS(253),
    [anon_sym_AT_ATf] = ACTIONS(253),
    [anon_sym_AT_ATs_COLON] = ACTIONS(253),
    [anon_sym_AT_ATc_COLON] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [anon_sym_AT_BANG] = ACTIONS(253),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(253),
    [anon_sym_ATb_COLON] = ACTIONS(253),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(253),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(253),
    [anon_sym_ATr_COLON] = ACTIONS(253),
    [anon_sym_ATf_COLON] = ACTIONS(253),
    [anon_sym_ATs_COLON] = ACTIONS(253),
    [anon_sym_ATx_COLON] = ACTIONS(253),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_1_GT] = ACTIONS(253),
    [anon_sym_2_GT] = ACTIONS(253),
    [anon_sym_H_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_1_GT_GT] = ACTIONS(253),
    [anon_sym_2_GT_GT] = ACTIONS(253),
    [sym__any_command] = ACTIONS(255),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_CR] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPEH] = ACTIONS(257),
    [anon_sym_PIPET] = ACTIONS(257),
    [anon_sym_AT_AT] = ACTIONS(259),
    [anon_sym_AT_ATdbt] = ACTIONS(259),
    [anon_sym_AT_ATdbta] = ACTIONS(257),
    [anon_sym_AT_ATdbtb] = ACTIONS(257),
    [anon_sym_AT_ATdbts] = ACTIONS(257),
    [anon_sym_AT_AT_DOT] = ACTIONS(257),
    [anon_sym_AT_AT_EQ] = ACTIONS(257),
    [anon_sym_AT_ATk] = ACTIONS(257),
    [anon_sym_AT_ATt] = ACTIONS(257),
    [anon_sym_AT_ATb] = ACTIONS(257),
    [anon_sym_AT_ATi] = ACTIONS(259),
    [anon_sym_AT_ATiS] = ACTIONS(257),
    [anon_sym_AT_ATf] = ACTIONS(257),
    [anon_sym_AT_ATs_COLON] = ACTIONS(257),
    [anon_sym_AT_ATc_COLON] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym_AT_BANG] = ACTIONS(257),
    [anon_sym_AT_LPAREN] = ACTIONS(257),
    [anon_sym_ATa_COLON] = ACTIONS(257),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(257),
    [anon_sym_ATe_COLON] = ACTIONS(257),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(257),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(257),
    [anon_sym_ATs_COLON] = ACTIONS(257),
    [anon_sym_ATx_COLON] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_1_GT] = ACTIONS(259),
    [anon_sym_2_GT] = ACTIONS(259),
    [anon_sym_H_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_1_GT_GT] = ACTIONS(257),
    [anon_sym_2_GT_GT] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_CR] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPEH] = ACTIONS(261),
    [anon_sym_PIPET] = ACTIONS(261),
    [anon_sym_AT_AT] = ACTIONS(263),
    [anon_sym_AT_ATdbt] = ACTIONS(263),
    [anon_sym_AT_ATdbta] = ACTIONS(261),
    [anon_sym_AT_ATdbtb] = ACTIONS(261),
    [anon_sym_AT_ATdbts] = ACTIONS(261),
    [anon_sym_AT_AT_DOT] = ACTIONS(261),
    [anon_sym_AT_AT_EQ] = ACTIONS(261),
    [anon_sym_AT_ATk] = ACTIONS(261),
    [anon_sym_AT_ATt] = ACTIONS(261),
    [anon_sym_AT_ATb] = ACTIONS(261),
    [anon_sym_AT_ATi] = ACTIONS(263),
    [anon_sym_AT_ATiS] = ACTIONS(261),
    [anon_sym_AT_ATf] = ACTIONS(261),
    [anon_sym_AT_ATs_COLON] = ACTIONS(261),
    [anon_sym_AT_ATc_COLON] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_AT_BANG] = ACTIONS(261),
    [anon_sym_AT_LPAREN] = ACTIONS(261),
    [anon_sym_ATa_COLON] = ACTIONS(261),
    [anon_sym_ATb_COLON] = ACTIONS(261),
    [anon_sym_ATB_COLON] = ACTIONS(261),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(261),
    [anon_sym_ATi_COLON] = ACTIONS(261),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(261),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_1_GT] = ACTIONS(263),
    [anon_sym_2_GT] = ACTIONS(263),
    [anon_sym_H_GT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_1_GT_GT] = ACTIONS(261),
    [anon_sym_2_GT_GT] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_CR] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PIPEH] = ACTIONS(265),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(267),
    [anon_sym_AT_ATdbta] = ACTIONS(265),
    [anon_sym_AT_ATdbtb] = ACTIONS(265),
    [anon_sym_AT_ATdbts] = ACTIONS(265),
    [anon_sym_AT_AT_DOT] = ACTIONS(265),
    [anon_sym_AT_AT_EQ] = ACTIONS(265),
    [anon_sym_AT_ATk] = ACTIONS(265),
    [anon_sym_AT_ATt] = ACTIONS(265),
    [anon_sym_AT_ATb] = ACTIONS(265),
    [anon_sym_AT_ATi] = ACTIONS(267),
    [anon_sym_AT_ATiS] = ACTIONS(265),
    [anon_sym_AT_ATf] = ACTIONS(265),
    [anon_sym_AT_ATs_COLON] = ACTIONS(265),
    [anon_sym_AT_ATc_COLON] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(267),
    [anon_sym_AT_BANG] = ACTIONS(265),
    [anon_sym_AT_LPAREN] = ACTIONS(265),
    [anon_sym_ATa_COLON] = ACTIONS(265),
    [anon_sym_ATb_COLON] = ACTIONS(265),
    [anon_sym_ATB_COLON] = ACTIONS(265),
    [anon_sym_ATe_COLON] = ACTIONS(265),
    [anon_sym_ATF_COLON] = ACTIONS(265),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(265),
    [anon_sym_ATo_COLON] = ACTIONS(265),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(265),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_1_GT] = ACTIONS(267),
    [anon_sym_2_GT] = ACTIONS(267),
    [anon_sym_H_GT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_1_GT_GT] = ACTIONS(265),
    [anon_sym_2_GT_GT] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_CR] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(269),
    [anon_sym_PIPET] = ACTIONS(269),
    [anon_sym_AT_AT] = ACTIONS(271),
    [anon_sym_AT_ATdbt] = ACTIONS(271),
    [anon_sym_AT_ATdbta] = ACTIONS(269),
    [anon_sym_AT_ATdbtb] = ACTIONS(269),
    [anon_sym_AT_ATdbts] = ACTIONS(269),
    [anon_sym_AT_AT_DOT] = ACTIONS(269),
    [anon_sym_AT_AT_EQ] = ACTIONS(269),
    [anon_sym_AT_ATk] = ACTIONS(269),
    [anon_sym_AT_ATt] = ACTIONS(269),
    [anon_sym_AT_ATb] = ACTIONS(269),
    [anon_sym_AT_ATi] = ACTIONS(271),
    [anon_sym_AT_ATiS] = ACTIONS(269),
    [anon_sym_AT_ATf] = ACTIONS(269),
    [anon_sym_AT_ATs_COLON] = ACTIONS(269),
    [anon_sym_AT_ATc_COLON] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(271),
    [anon_sym_AT_BANG] = ACTIONS(269),
    [anon_sym_AT_LPAREN] = ACTIONS(269),
    [anon_sym_ATa_COLON] = ACTIONS(269),
    [anon_sym_ATb_COLON] = ACTIONS(269),
    [anon_sym_ATB_COLON] = ACTIONS(269),
    [anon_sym_ATe_COLON] = ACTIONS(269),
    [anon_sym_ATF_COLON] = ACTIONS(269),
    [anon_sym_ATi_COLON] = ACTIONS(269),
    [anon_sym_ATk_COLON] = ACTIONS(269),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(269),
    [anon_sym_ATf_COLON] = ACTIONS(269),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_1_GT] = ACTIONS(271),
    [anon_sym_2_GT] = ACTIONS(271),
    [anon_sym_H_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(269),
    [anon_sym_1_GT_GT] = ACTIONS(269),
    [anon_sym_2_GT_GT] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_CR] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPEH] = ACTIONS(273),
    [anon_sym_PIPET] = ACTIONS(273),
    [anon_sym_AT_AT] = ACTIONS(275),
    [anon_sym_AT_ATdbt] = ACTIONS(275),
    [anon_sym_AT_ATdbta] = ACTIONS(273),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(273),
    [anon_sym_AT_AT_DOT] = ACTIONS(273),
    [anon_sym_AT_AT_EQ] = ACTIONS(273),
    [anon_sym_AT_ATk] = ACTIONS(273),
    [anon_sym_AT_ATt] = ACTIONS(273),
    [anon_sym_AT_ATb] = ACTIONS(273),
    [anon_sym_AT_ATi] = ACTIONS(275),
    [anon_sym_AT_ATiS] = ACTIONS(273),
    [anon_sym_AT_ATf] = ACTIONS(273),
    [anon_sym_AT_ATs_COLON] = ACTIONS(273),
    [anon_sym_AT_ATc_COLON] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_AT_BANG] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(273),
    [anon_sym_ATa_COLON] = ACTIONS(273),
    [anon_sym_ATb_COLON] = ACTIONS(273),
    [anon_sym_ATB_COLON] = ACTIONS(273),
    [anon_sym_ATe_COLON] = ACTIONS(273),
    [anon_sym_ATF_COLON] = ACTIONS(273),
    [anon_sym_ATi_COLON] = ACTIONS(273),
    [anon_sym_ATk_COLON] = ACTIONS(273),
    [anon_sym_ATo_COLON] = ACTIONS(273),
    [anon_sym_ATr_COLON] = ACTIONS(273),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(273),
    [anon_sym_ATx_COLON] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_1_GT] = ACTIONS(275),
    [anon_sym_2_GT] = ACTIONS(275),
    [anon_sym_H_GT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_1_GT_GT] = ACTIONS(273),
    [anon_sym_2_GT_GT] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_CR] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PIPEH] = ACTIONS(277),
    [anon_sym_PIPET] = ACTIONS(277),
    [anon_sym_AT_AT] = ACTIONS(279),
    [anon_sym_AT_ATdbt] = ACTIONS(279),
    [anon_sym_AT_ATdbta] = ACTIONS(277),
    [anon_sym_AT_ATdbtb] = ACTIONS(277),
    [anon_sym_AT_ATdbts] = ACTIONS(277),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(277),
    [anon_sym_AT_ATk] = ACTIONS(277),
    [anon_sym_AT_ATt] = ACTIONS(277),
    [anon_sym_AT_ATb] = ACTIONS(277),
    [anon_sym_AT_ATi] = ACTIONS(279),
    [anon_sym_AT_ATiS] = ACTIONS(277),
    [anon_sym_AT_ATf] = ACTIONS(277),
    [anon_sym_AT_ATs_COLON] = ACTIONS(277),
    [anon_sym_AT_ATc_COLON] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_AT_BANG] = ACTIONS(277),
    [anon_sym_AT_LPAREN] = ACTIONS(277),
    [anon_sym_ATa_COLON] = ACTIONS(277),
    [anon_sym_ATb_COLON] = ACTIONS(277),
    [anon_sym_ATB_COLON] = ACTIONS(277),
    [anon_sym_ATe_COLON] = ACTIONS(277),
    [anon_sym_ATF_COLON] = ACTIONS(277),
    [anon_sym_ATi_COLON] = ACTIONS(277),
    [anon_sym_ATk_COLON] = ACTIONS(277),
    [anon_sym_ATo_COLON] = ACTIONS(277),
    [anon_sym_ATr_COLON] = ACTIONS(277),
    [anon_sym_ATf_COLON] = ACTIONS(277),
    [anon_sym_ATs_COLON] = ACTIONS(277),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_1_GT] = ACTIONS(279),
    [anon_sym_2_GT] = ACTIONS(279),
    [anon_sym_H_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_1_GT_GT] = ACTIONS(277),
    [anon_sym_2_GT_GT] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_CR] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_PIPEH] = ACTIONS(281),
    [anon_sym_PIPET] = ACTIONS(281),
    [anon_sym_AT_AT] = ACTIONS(283),
    [anon_sym_AT_ATdbt] = ACTIONS(283),
    [anon_sym_AT_ATdbta] = ACTIONS(281),
    [anon_sym_AT_ATdbtb] = ACTIONS(281),
    [anon_sym_AT_ATdbts] = ACTIONS(281),
    [anon_sym_AT_AT_DOT] = ACTIONS(281),
    [anon_sym_AT_AT_EQ] = ACTIONS(281),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(281),
    [anon_sym_AT_ATb] = ACTIONS(281),
    [anon_sym_AT_ATi] = ACTIONS(283),
    [anon_sym_AT_ATiS] = ACTIONS(281),
    [anon_sym_AT_ATf] = ACTIONS(281),
    [anon_sym_AT_ATs_COLON] = ACTIONS(281),
    [anon_sym_AT_ATc_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_AT_BANG] = ACTIONS(281),
    [anon_sym_AT_LPAREN] = ACTIONS(281),
    [anon_sym_ATa_COLON] = ACTIONS(281),
    [anon_sym_ATb_COLON] = ACTIONS(281),
    [anon_sym_ATB_COLON] = ACTIONS(281),
    [anon_sym_ATe_COLON] = ACTIONS(281),
    [anon_sym_ATF_COLON] = ACTIONS(281),
    [anon_sym_ATi_COLON] = ACTIONS(281),
    [anon_sym_ATk_COLON] = ACTIONS(281),
    [anon_sym_ATo_COLON] = ACTIONS(281),
    [anon_sym_ATr_COLON] = ACTIONS(281),
    [anon_sym_ATf_COLON] = ACTIONS(281),
    [anon_sym_ATs_COLON] = ACTIONS(281),
    [anon_sym_ATx_COLON] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_1_GT] = ACTIONS(283),
    [anon_sym_2_GT] = ACTIONS(283),
    [anon_sym_H_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [anon_sym_1_GT_GT] = ACTIONS(281),
    [anon_sym_2_GT_GT] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_CR] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_PIPEH] = ACTIONS(285),
    [anon_sym_PIPET] = ACTIONS(285),
    [anon_sym_AT_AT] = ACTIONS(287),
    [anon_sym_AT_ATdbt] = ACTIONS(287),
    [anon_sym_AT_ATdbta] = ACTIONS(285),
    [anon_sym_AT_ATdbtb] = ACTIONS(285),
    [anon_sym_AT_ATdbts] = ACTIONS(285),
    [anon_sym_AT_AT_DOT] = ACTIONS(285),
    [anon_sym_AT_AT_EQ] = ACTIONS(285),
    [anon_sym_AT_ATk] = ACTIONS(285),
    [anon_sym_AT_ATt] = ACTIONS(285),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(285),
    [anon_sym_AT_ATf] = ACTIONS(285),
    [anon_sym_AT_ATs_COLON] = ACTIONS(285),
    [anon_sym_AT_ATc_COLON] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_AT_BANG] = ACTIONS(285),
    [anon_sym_AT_LPAREN] = ACTIONS(285),
    [anon_sym_ATa_COLON] = ACTIONS(285),
    [anon_sym_ATb_COLON] = ACTIONS(285),
    [anon_sym_ATB_COLON] = ACTIONS(285),
    [anon_sym_ATe_COLON] = ACTIONS(285),
    [anon_sym_ATF_COLON] = ACTIONS(285),
    [anon_sym_ATi_COLON] = ACTIONS(285),
    [anon_sym_ATk_COLON] = ACTIONS(285),
    [anon_sym_ATo_COLON] = ACTIONS(285),
    [anon_sym_ATr_COLON] = ACTIONS(285),
    [anon_sym_ATf_COLON] = ACTIONS(285),
    [anon_sym_ATs_COLON] = ACTIONS(285),
    [anon_sym_ATx_COLON] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_1_GT] = ACTIONS(287),
    [anon_sym_2_GT] = ACTIONS(287),
    [anon_sym_H_GT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_1_GT_GT] = ACTIONS(285),
    [anon_sym_2_GT_GT] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPEH] = ACTIONS(289),
    [anon_sym_PIPET] = ACTIONS(289),
    [anon_sym_AT_AT] = ACTIONS(291),
    [anon_sym_AT_ATdbt] = ACTIONS(291),
    [anon_sym_AT_ATdbta] = ACTIONS(289),
    [anon_sym_AT_ATdbtb] = ACTIONS(289),
    [anon_sym_AT_ATdbts] = ACTIONS(289),
    [anon_sym_AT_AT_DOT] = ACTIONS(289),
    [anon_sym_AT_AT_EQ] = ACTIONS(289),
    [anon_sym_AT_ATk] = ACTIONS(289),
    [anon_sym_AT_ATt] = ACTIONS(289),
    [anon_sym_AT_ATb] = ACTIONS(289),
    [anon_sym_AT_ATi] = ACTIONS(291),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(289),
    [anon_sym_AT_ATs_COLON] = ACTIONS(289),
    [anon_sym_AT_ATc_COLON] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_AT_BANG] = ACTIONS(289),
    [anon_sym_AT_LPAREN] = ACTIONS(289),
    [anon_sym_ATa_COLON] = ACTIONS(289),
    [anon_sym_ATb_COLON] = ACTIONS(289),
    [anon_sym_ATB_COLON] = ACTIONS(289),
    [anon_sym_ATe_COLON] = ACTIONS(289),
    [anon_sym_ATF_COLON] = ACTIONS(289),
    [anon_sym_ATi_COLON] = ACTIONS(289),
    [anon_sym_ATk_COLON] = ACTIONS(289),
    [anon_sym_ATo_COLON] = ACTIONS(289),
    [anon_sym_ATr_COLON] = ACTIONS(289),
    [anon_sym_ATf_COLON] = ACTIONS(289),
    [anon_sym_ATs_COLON] = ACTIONS(289),
    [anon_sym_ATx_COLON] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_1_GT] = ACTIONS(291),
    [anon_sym_2_GT] = ACTIONS(291),
    [anon_sym_H_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_1_GT_GT] = ACTIONS(289),
    [anon_sym_2_GT_GT] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_CR] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(293),
    [anon_sym_AT_AT] = ACTIONS(295),
    [anon_sym_AT_ATdbt] = ACTIONS(295),
    [anon_sym_AT_ATdbta] = ACTIONS(293),
    [anon_sym_AT_ATdbtb] = ACTIONS(293),
    [anon_sym_AT_ATdbts] = ACTIONS(293),
    [anon_sym_AT_AT_DOT] = ACTIONS(293),
    [anon_sym_AT_AT_EQ] = ACTIONS(293),
    [anon_sym_AT_ATk] = ACTIONS(293),
    [anon_sym_AT_ATt] = ACTIONS(293),
    [anon_sym_AT_ATb] = ACTIONS(293),
    [anon_sym_AT_ATi] = ACTIONS(295),
    [anon_sym_AT_ATiS] = ACTIONS(293),
    [anon_sym_AT_ATf] = ACTIONS(293),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_AT_BANG] = ACTIONS(293),
    [anon_sym_AT_LPAREN] = ACTIONS(293),
    [anon_sym_ATa_COLON] = ACTIONS(293),
    [anon_sym_ATb_COLON] = ACTIONS(293),
    [anon_sym_ATB_COLON] = ACTIONS(293),
    [anon_sym_ATe_COLON] = ACTIONS(293),
    [anon_sym_ATF_COLON] = ACTIONS(293),
    [anon_sym_ATi_COLON] = ACTIONS(293),
    [anon_sym_ATk_COLON] = ACTIONS(293),
    [anon_sym_ATo_COLON] = ACTIONS(293),
    [anon_sym_ATr_COLON] = ACTIONS(293),
    [anon_sym_ATf_COLON] = ACTIONS(293),
    [anon_sym_ATs_COLON] = ACTIONS(293),
    [anon_sym_ATx_COLON] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_1_GT] = ACTIONS(295),
    [anon_sym_2_GT] = ACTIONS(295),
    [anon_sym_H_GT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_1_GT_GT] = ACTIONS(293),
    [anon_sym_2_GT_GT] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(293),
    [anon_sym_CR] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPEH] = ACTIONS(297),
    [anon_sym_PIPET] = ACTIONS(297),
    [anon_sym_AT_AT] = ACTIONS(299),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(297),
    [anon_sym_AT_ATdbtb] = ACTIONS(297),
    [anon_sym_AT_ATdbts] = ACTIONS(297),
    [anon_sym_AT_AT_DOT] = ACTIONS(297),
    [anon_sym_AT_AT_EQ] = ACTIONS(297),
    [anon_sym_AT_ATk] = ACTIONS(297),
    [anon_sym_AT_ATt] = ACTIONS(297),
    [anon_sym_AT_ATb] = ACTIONS(297),
    [anon_sym_AT_ATi] = ACTIONS(299),
    [anon_sym_AT_ATiS] = ACTIONS(297),
    [anon_sym_AT_ATf] = ACTIONS(297),
    [anon_sym_AT_ATs_COLON] = ACTIONS(297),
    [anon_sym_AT_ATc_COLON] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(299),
    [anon_sym_AT_BANG] = ACTIONS(297),
    [anon_sym_AT_LPAREN] = ACTIONS(297),
    [anon_sym_ATa_COLON] = ACTIONS(297),
    [anon_sym_ATb_COLON] = ACTIONS(297),
    [anon_sym_ATB_COLON] = ACTIONS(297),
    [anon_sym_ATe_COLON] = ACTIONS(297),
    [anon_sym_ATF_COLON] = ACTIONS(297),
    [anon_sym_ATi_COLON] = ACTIONS(297),
    [anon_sym_ATk_COLON] = ACTIONS(297),
    [anon_sym_ATo_COLON] = ACTIONS(297),
    [anon_sym_ATr_COLON] = ACTIONS(297),
    [anon_sym_ATf_COLON] = ACTIONS(297),
    [anon_sym_ATs_COLON] = ACTIONS(297),
    [anon_sym_ATx_COLON] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_1_GT] = ACTIONS(299),
    [anon_sym_2_GT] = ACTIONS(299),
    [anon_sym_H_GT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(297),
    [anon_sym_1_GT_GT] = ACTIONS(297),
    [anon_sym_2_GT_GT] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_CR] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PIPEH] = ACTIONS(301),
    [anon_sym_PIPET] = ACTIONS(301),
    [anon_sym_AT_AT] = ACTIONS(303),
    [anon_sym_AT_ATdbt] = ACTIONS(303),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(301),
    [anon_sym_AT_ATdbts] = ACTIONS(301),
    [anon_sym_AT_AT_DOT] = ACTIONS(301),
    [anon_sym_AT_AT_EQ] = ACTIONS(301),
    [anon_sym_AT_ATk] = ACTIONS(301),
    [anon_sym_AT_ATt] = ACTIONS(301),
    [anon_sym_AT_ATb] = ACTIONS(301),
    [anon_sym_AT_ATi] = ACTIONS(303),
    [anon_sym_AT_ATiS] = ACTIONS(301),
    [anon_sym_AT_ATf] = ACTIONS(301),
    [anon_sym_AT_ATs_COLON] = ACTIONS(301),
    [anon_sym_AT_ATc_COLON] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_AT_BANG] = ACTIONS(301),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(301),
    [anon_sym_ATb_COLON] = ACTIONS(301),
    [anon_sym_ATB_COLON] = ACTIONS(301),
    [anon_sym_ATe_COLON] = ACTIONS(301),
    [anon_sym_ATF_COLON] = ACTIONS(301),
    [anon_sym_ATi_COLON] = ACTIONS(301),
    [anon_sym_ATk_COLON] = ACTIONS(301),
    [anon_sym_ATo_COLON] = ACTIONS(301),
    [anon_sym_ATr_COLON] = ACTIONS(301),
    [anon_sym_ATf_COLON] = ACTIONS(301),
    [anon_sym_ATs_COLON] = ACTIONS(301),
    [anon_sym_ATx_COLON] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_1_GT] = ACTIONS(303),
    [anon_sym_2_GT] = ACTIONS(303),
    [anon_sym_H_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_1_GT_GT] = ACTIONS(301),
    [anon_sym_2_GT_GT] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(301),
    [anon_sym_CR] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPEH] = ACTIONS(305),
    [anon_sym_PIPET] = ACTIONS(305),
    [anon_sym_AT_AT] = ACTIONS(307),
    [anon_sym_AT_ATdbt] = ACTIONS(307),
    [anon_sym_AT_ATdbta] = ACTIONS(305),
    [anon_sym_AT_ATdbtb] = ACTIONS(305),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(305),
    [anon_sym_AT_AT_EQ] = ACTIONS(305),
    [anon_sym_AT_ATk] = ACTIONS(305),
    [anon_sym_AT_ATt] = ACTIONS(305),
    [anon_sym_AT_ATb] = ACTIONS(305),
    [anon_sym_AT_ATi] = ACTIONS(307),
    [anon_sym_AT_ATiS] = ACTIONS(305),
    [anon_sym_AT_ATf] = ACTIONS(305),
    [anon_sym_AT_ATs_COLON] = ACTIONS(305),
    [anon_sym_AT_ATc_COLON] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_AT_BANG] = ACTIONS(305),
    [anon_sym_AT_LPAREN] = ACTIONS(305),
    [anon_sym_ATa_COLON] = ACTIONS(305),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(305),
    [anon_sym_ATe_COLON] = ACTIONS(305),
    [anon_sym_ATF_COLON] = ACTIONS(305),
    [anon_sym_ATi_COLON] = ACTIONS(305),
    [anon_sym_ATk_COLON] = ACTIONS(305),
    [anon_sym_ATo_COLON] = ACTIONS(305),
    [anon_sym_ATr_COLON] = ACTIONS(305),
    [anon_sym_ATf_COLON] = ACTIONS(305),
    [anon_sym_ATs_COLON] = ACTIONS(305),
    [anon_sym_ATx_COLON] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_1_GT] = ACTIONS(307),
    [anon_sym_2_GT] = ACTIONS(307),
    [anon_sym_H_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_1_GT_GT] = ACTIONS(305),
    [anon_sym_2_GT_GT] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(305),
    [anon_sym_CR] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPEH] = ACTIONS(309),
    [anon_sym_PIPET] = ACTIONS(309),
    [anon_sym_AT_AT] = ACTIONS(311),
    [anon_sym_AT_ATdbt] = ACTIONS(311),
    [anon_sym_AT_ATdbta] = ACTIONS(309),
    [anon_sym_AT_ATdbtb] = ACTIONS(309),
    [anon_sym_AT_ATdbts] = ACTIONS(309),
    [anon_sym_AT_AT_DOT] = ACTIONS(309),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(309),
    [anon_sym_AT_ATt] = ACTIONS(309),
    [anon_sym_AT_ATb] = ACTIONS(309),
    [anon_sym_AT_ATi] = ACTIONS(311),
    [anon_sym_AT_ATiS] = ACTIONS(309),
    [anon_sym_AT_ATf] = ACTIONS(309),
    [anon_sym_AT_ATs_COLON] = ACTIONS(309),
    [anon_sym_AT_ATc_COLON] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_AT_BANG] = ACTIONS(309),
    [anon_sym_AT_LPAREN] = ACTIONS(309),
    [anon_sym_ATa_COLON] = ACTIONS(309),
    [anon_sym_ATb_COLON] = ACTIONS(309),
    [anon_sym_ATB_COLON] = ACTIONS(309),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(309),
    [anon_sym_ATi_COLON] = ACTIONS(309),
    [anon_sym_ATk_COLON] = ACTIONS(309),
    [anon_sym_ATo_COLON] = ACTIONS(309),
    [anon_sym_ATr_COLON] = ACTIONS(309),
    [anon_sym_ATf_COLON] = ACTIONS(309),
    [anon_sym_ATs_COLON] = ACTIONS(309),
    [anon_sym_ATx_COLON] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_1_GT] = ACTIONS(311),
    [anon_sym_2_GT] = ACTIONS(311),
    [anon_sym_H_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_1_GT_GT] = ACTIONS(309),
    [anon_sym_2_GT_GT] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_CR] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PIPEH] = ACTIONS(313),
    [anon_sym_PIPET] = ACTIONS(313),
    [anon_sym_AT_AT] = ACTIONS(315),
    [anon_sym_AT_ATdbt] = ACTIONS(315),
    [anon_sym_AT_ATdbta] = ACTIONS(313),
    [anon_sym_AT_ATdbtb] = ACTIONS(313),
    [anon_sym_AT_ATdbts] = ACTIONS(313),
    [anon_sym_AT_AT_DOT] = ACTIONS(313),
    [anon_sym_AT_AT_EQ] = ACTIONS(313),
    [anon_sym_AT_ATk] = ACTIONS(313),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(313),
    [anon_sym_AT_ATi] = ACTIONS(315),
    [anon_sym_AT_ATiS] = ACTIONS(313),
    [anon_sym_AT_ATf] = ACTIONS(313),
    [anon_sym_AT_ATs_COLON] = ACTIONS(313),
    [anon_sym_AT_ATc_COLON] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_AT_BANG] = ACTIONS(313),
    [anon_sym_AT_LPAREN] = ACTIONS(313),
    [anon_sym_ATa_COLON] = ACTIONS(313),
    [anon_sym_ATb_COLON] = ACTIONS(313),
    [anon_sym_ATB_COLON] = ACTIONS(313),
    [anon_sym_ATe_COLON] = ACTIONS(313),
    [anon_sym_ATF_COLON] = ACTIONS(313),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(313),
    [anon_sym_ATo_COLON] = ACTIONS(313),
    [anon_sym_ATr_COLON] = ACTIONS(313),
    [anon_sym_ATf_COLON] = ACTIONS(313),
    [anon_sym_ATs_COLON] = ACTIONS(313),
    [anon_sym_ATx_COLON] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_1_GT] = ACTIONS(315),
    [anon_sym_2_GT] = ACTIONS(315),
    [anon_sym_H_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_1_GT_GT] = ACTIONS(313),
    [anon_sym_2_GT_GT] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_CR] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(317),
    [anon_sym_PIPET] = ACTIONS(317),
    [anon_sym_AT_AT] = ACTIONS(319),
    [anon_sym_AT_ATdbt] = ACTIONS(319),
    [anon_sym_AT_ATdbta] = ACTIONS(317),
    [anon_sym_AT_ATdbtb] = ACTIONS(317),
    [anon_sym_AT_ATdbts] = ACTIONS(317),
    [anon_sym_AT_AT_DOT] = ACTIONS(317),
    [anon_sym_AT_AT_EQ] = ACTIONS(317),
    [anon_sym_AT_ATk] = ACTIONS(317),
    [anon_sym_AT_ATt] = ACTIONS(317),
    [anon_sym_AT_ATb] = ACTIONS(317),
    [anon_sym_AT_ATi] = ACTIONS(319),
    [anon_sym_AT_ATiS] = ACTIONS(317),
    [anon_sym_AT_ATf] = ACTIONS(317),
    [anon_sym_AT_ATs_COLON] = ACTIONS(317),
    [anon_sym_AT_ATc_COLON] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_AT_BANG] = ACTIONS(317),
    [anon_sym_AT_LPAREN] = ACTIONS(317),
    [anon_sym_ATa_COLON] = ACTIONS(317),
    [anon_sym_ATb_COLON] = ACTIONS(317),
    [anon_sym_ATB_COLON] = ACTIONS(317),
    [anon_sym_ATe_COLON] = ACTIONS(317),
    [anon_sym_ATF_COLON] = ACTIONS(317),
    [anon_sym_ATi_COLON] = ACTIONS(317),
    [anon_sym_ATk_COLON] = ACTIONS(317),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(317),
    [anon_sym_ATf_COLON] = ACTIONS(317),
    [anon_sym_ATs_COLON] = ACTIONS(317),
    [anon_sym_ATx_COLON] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_1_GT] = ACTIONS(319),
    [anon_sym_2_GT] = ACTIONS(319),
    [anon_sym_H_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [anon_sym_1_GT_GT] = ACTIONS(317),
    [anon_sym_2_GT_GT] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(317),
    [anon_sym_CR] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PIPEH] = ACTIONS(321),
    [anon_sym_PIPET] = ACTIONS(321),
    [anon_sym_AT_AT] = ACTIONS(323),
    [anon_sym_AT_ATdbt] = ACTIONS(323),
    [anon_sym_AT_ATdbta] = ACTIONS(321),
    [anon_sym_AT_ATdbtb] = ACTIONS(321),
    [anon_sym_AT_ATdbts] = ACTIONS(321),
    [anon_sym_AT_AT_DOT] = ACTIONS(321),
    [anon_sym_AT_AT_EQ] = ACTIONS(321),
    [anon_sym_AT_ATk] = ACTIONS(321),
    [anon_sym_AT_ATt] = ACTIONS(321),
    [anon_sym_AT_ATb] = ACTIONS(321),
    [anon_sym_AT_ATi] = ACTIONS(323),
    [anon_sym_AT_ATiS] = ACTIONS(321),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(321),
    [anon_sym_AT_ATc_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_AT_BANG] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(321),
    [anon_sym_ATa_COLON] = ACTIONS(321),
    [anon_sym_ATb_COLON] = ACTIONS(321),
    [anon_sym_ATB_COLON] = ACTIONS(321),
    [anon_sym_ATe_COLON] = ACTIONS(321),
    [anon_sym_ATF_COLON] = ACTIONS(321),
    [anon_sym_ATi_COLON] = ACTIONS(321),
    [anon_sym_ATk_COLON] = ACTIONS(321),
    [anon_sym_ATo_COLON] = ACTIONS(321),
    [anon_sym_ATr_COLON] = ACTIONS(321),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(321),
    [anon_sym_ATx_COLON] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_1_GT] = ACTIONS(323),
    [anon_sym_2_GT] = ACTIONS(323),
    [anon_sym_H_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_1_GT_GT] = ACTIONS(321),
    [anon_sym_2_GT_GT] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_CR] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(162),
    [anon_sym_PIPET] = ACTIONS(162),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(162),
    [anon_sym_AT_ATdbtb] = ACTIONS(162),
    [anon_sym_AT_ATdbts] = ACTIONS(162),
    [anon_sym_AT_AT_DOT] = ACTIONS(162),
    [anon_sym_AT_AT_EQ] = ACTIONS(162),
    [anon_sym_AT_ATk] = ACTIONS(162),
    [anon_sym_AT_ATt] = ACTIONS(162),
    [anon_sym_AT_ATb] = ACTIONS(162),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(162),
    [anon_sym_AT_ATf] = ACTIONS(162),
    [anon_sym_AT_ATs_COLON] = ACTIONS(162),
    [anon_sym_AT_ATc_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(162),
    [anon_sym_AT_LPAREN] = ACTIONS(162),
    [anon_sym_ATa_COLON] = ACTIONS(162),
    [anon_sym_ATb_COLON] = ACTIONS(162),
    [anon_sym_ATB_COLON] = ACTIONS(162),
    [anon_sym_ATe_COLON] = ACTIONS(162),
    [anon_sym_ATF_COLON] = ACTIONS(162),
    [anon_sym_ATi_COLON] = ACTIONS(162),
    [anon_sym_ATk_COLON] = ACTIONS(162),
    [anon_sym_ATo_COLON] = ACTIONS(162),
    [anon_sym_ATr_COLON] = ACTIONS(162),
    [anon_sym_ATf_COLON] = ACTIONS(162),
    [anon_sym_ATs_COLON] = ACTIONS(162),
    [anon_sym_ATx_COLON] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [anon_sym_1_GT_GT] = ACTIONS(162),
    [anon_sym_2_GT_GT] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(162),
    [anon_sym_PIPET] = ACTIONS(162),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(162),
    [anon_sym_AT_ATdbtb] = ACTIONS(162),
    [anon_sym_AT_ATdbts] = ACTIONS(162),
    [anon_sym_AT_AT_DOT] = ACTIONS(162),
    [anon_sym_AT_AT_EQ] = ACTIONS(162),
    [anon_sym_AT_ATk] = ACTIONS(162),
    [anon_sym_AT_ATt] = ACTIONS(162),
    [anon_sym_AT_ATb] = ACTIONS(162),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(162),
    [anon_sym_AT_ATf] = ACTIONS(162),
    [anon_sym_AT_ATs_COLON] = ACTIONS(162),
    [anon_sym_AT_ATc_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(162),
    [anon_sym_AT_LPAREN] = ACTIONS(162),
    [anon_sym_ATa_COLON] = ACTIONS(162),
    [anon_sym_ATb_COLON] = ACTIONS(162),
    [anon_sym_ATB_COLON] = ACTIONS(162),
    [anon_sym_ATe_COLON] = ACTIONS(162),
    [anon_sym_ATF_COLON] = ACTIONS(162),
    [anon_sym_ATi_COLON] = ACTIONS(162),
    [anon_sym_ATk_COLON] = ACTIONS(162),
    [anon_sym_ATo_COLON] = ACTIONS(162),
    [anon_sym_ATr_COLON] = ACTIONS(162),
    [anon_sym_ATf_COLON] = ACTIONS(162),
    [anon_sym_ATs_COLON] = ACTIONS(162),
    [anon_sym_ATx_COLON] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [anon_sym_1_GT_GT] = ACTIONS(162),
    [anon_sym_2_GT_GT] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_PIPEH] = ACTIONS(166),
    [anon_sym_PIPET] = ACTIONS(166),
    [anon_sym_AT_AT] = ACTIONS(168),
    [anon_sym_AT_ATdbt] = ACTIONS(168),
    [anon_sym_AT_ATdbta] = ACTIONS(166),
    [anon_sym_AT_ATdbtb] = ACTIONS(166),
    [anon_sym_AT_ATdbts] = ACTIONS(166),
    [anon_sym_AT_AT_DOT] = ACTIONS(166),
    [anon_sym_AT_AT_EQ] = ACTIONS(166),
    [anon_sym_AT_ATk] = ACTIONS(166),
    [anon_sym_AT_ATt] = ACTIONS(166),
    [anon_sym_AT_ATb] = ACTIONS(166),
    [anon_sym_AT_ATi] = ACTIONS(168),
    [anon_sym_AT_ATiS] = ACTIONS(166),
    [anon_sym_AT_ATf] = ACTIONS(166),
    [anon_sym_AT_ATs_COLON] = ACTIONS(166),
    [anon_sym_AT_ATc_COLON] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_AT_BANG] = ACTIONS(166),
    [anon_sym_AT_LPAREN] = ACTIONS(166),
    [anon_sym_ATa_COLON] = ACTIONS(166),
    [anon_sym_ATb_COLON] = ACTIONS(166),
    [anon_sym_ATB_COLON] = ACTIONS(166),
    [anon_sym_ATe_COLON] = ACTIONS(166),
    [anon_sym_ATF_COLON] = ACTIONS(166),
    [anon_sym_ATi_COLON] = ACTIONS(166),
    [anon_sym_ATk_COLON] = ACTIONS(166),
    [anon_sym_ATo_COLON] = ACTIONS(166),
    [anon_sym_ATr_COLON] = ACTIONS(166),
    [anon_sym_ATf_COLON] = ACTIONS(166),
    [anon_sym_ATs_COLON] = ACTIONS(166),
    [anon_sym_ATx_COLON] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_1_GT] = ACTIONS(168),
    [anon_sym_2_GT] = ACTIONS(168),
    [anon_sym_H_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_1_GT_GT] = ACTIONS(166),
    [anon_sym_2_GT_GT] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(325),
    [anon_sym_PIPET] = ACTIONS(325),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(325),
    [anon_sym_AT_ATdbtb] = ACTIONS(325),
    [anon_sym_AT_ATdbts] = ACTIONS(325),
    [anon_sym_AT_AT_DOT] = ACTIONS(325),
    [anon_sym_AT_AT_EQ] = ACTIONS(325),
    [anon_sym_AT_ATk] = ACTIONS(325),
    [anon_sym_AT_ATt] = ACTIONS(325),
    [anon_sym_AT_ATb] = ACTIONS(325),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(325),
    [anon_sym_AT_ATf] = ACTIONS(325),
    [anon_sym_AT_ATs_COLON] = ACTIONS(325),
    [anon_sym_AT_ATc_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(325),
    [anon_sym_AT_LPAREN] = ACTIONS(325),
    [anon_sym_ATa_COLON] = ACTIONS(325),
    [anon_sym_ATb_COLON] = ACTIONS(325),
    [anon_sym_ATB_COLON] = ACTIONS(325),
    [anon_sym_ATe_COLON] = ACTIONS(325),
    [anon_sym_ATF_COLON] = ACTIONS(325),
    [anon_sym_ATi_COLON] = ACTIONS(325),
    [anon_sym_ATk_COLON] = ACTIONS(325),
    [anon_sym_ATo_COLON] = ACTIONS(325),
    [anon_sym_ATr_COLON] = ACTIONS(325),
    [anon_sym_ATf_COLON] = ACTIONS(325),
    [anon_sym_ATs_COLON] = ACTIONS(325),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_1_GT] = ACTIONS(327),
    [anon_sym_2_GT] = ACTIONS(327),
    [anon_sym_H_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_1_GT_GT] = ACTIONS(325),
    [anon_sym_2_GT_GT] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(329),
    [anon_sym_PIPET] = ACTIONS(329),
    [anon_sym_AT_AT] = ACTIONS(331),
    [anon_sym_AT_ATdbt] = ACTIONS(331),
    [anon_sym_AT_ATdbta] = ACTIONS(329),
    [anon_sym_AT_ATdbtb] = ACTIONS(329),
    [anon_sym_AT_ATdbts] = ACTIONS(329),
    [anon_sym_AT_AT_DOT] = ACTIONS(329),
    [anon_sym_AT_AT_EQ] = ACTIONS(329),
    [anon_sym_AT_ATk] = ACTIONS(329),
    [anon_sym_AT_ATt] = ACTIONS(329),
    [anon_sym_AT_ATb] = ACTIONS(329),
    [anon_sym_AT_ATi] = ACTIONS(331),
    [anon_sym_AT_ATiS] = ACTIONS(329),
    [anon_sym_AT_ATf] = ACTIONS(329),
    [anon_sym_AT_ATs_COLON] = ACTIONS(329),
    [anon_sym_AT_ATc_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(329),
    [anon_sym_ATa_COLON] = ACTIONS(329),
    [anon_sym_ATb_COLON] = ACTIONS(329),
    [anon_sym_ATB_COLON] = ACTIONS(329),
    [anon_sym_ATe_COLON] = ACTIONS(329),
    [anon_sym_ATF_COLON] = ACTIONS(329),
    [anon_sym_ATi_COLON] = ACTIONS(329),
    [anon_sym_ATk_COLON] = ACTIONS(329),
    [anon_sym_ATo_COLON] = ACTIONS(329),
    [anon_sym_ATr_COLON] = ACTIONS(329),
    [anon_sym_ATf_COLON] = ACTIONS(329),
    [anon_sym_ATs_COLON] = ACTIONS(329),
    [anon_sym_ATx_COLON] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_1_GT] = ACTIONS(331),
    [anon_sym_2_GT] = ACTIONS(331),
    [anon_sym_H_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_1_GT_GT] = ACTIONS(329),
    [anon_sym_2_GT_GT] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_CR] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPEH] = ACTIONS(333),
    [anon_sym_PIPET] = ACTIONS(333),
    [anon_sym_AT_AT] = ACTIONS(335),
    [anon_sym_AT_ATdbt] = ACTIONS(335),
    [anon_sym_AT_ATdbta] = ACTIONS(333),
    [anon_sym_AT_ATdbtb] = ACTIONS(333),
    [anon_sym_AT_ATdbts] = ACTIONS(333),
    [anon_sym_AT_AT_DOT] = ACTIONS(333),
    [anon_sym_AT_AT_EQ] = ACTIONS(333),
    [anon_sym_AT_ATk] = ACTIONS(333),
    [anon_sym_AT_ATt] = ACTIONS(333),
    [anon_sym_AT_ATb] = ACTIONS(333),
    [anon_sym_AT_ATi] = ACTIONS(335),
    [anon_sym_AT_ATiS] = ACTIONS(333),
    [anon_sym_AT_ATf] = ACTIONS(333),
    [anon_sym_AT_ATs_COLON] = ACTIONS(333),
    [anon_sym_AT_ATc_COLON] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_AT_BANG] = ACTIONS(333),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(333),
    [anon_sym_ATB_COLON] = ACTIONS(333),
    [anon_sym_ATe_COLON] = ACTIONS(333),
    [anon_sym_ATF_COLON] = ACTIONS(333),
    [anon_sym_ATi_COLON] = ACTIONS(333),
    [anon_sym_ATk_COLON] = ACTIONS(333),
    [anon_sym_ATo_COLON] = ACTIONS(333),
    [anon_sym_ATr_COLON] = ACTIONS(333),
    [anon_sym_ATf_COLON] = ACTIONS(333),
    [anon_sym_ATs_COLON] = ACTIONS(333),
    [anon_sym_ATx_COLON] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_1_GT] = ACTIONS(335),
    [anon_sym_2_GT] = ACTIONS(335),
    [anon_sym_H_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(333),
    [anon_sym_1_GT_GT] = ACTIONS(333),
    [anon_sym_2_GT_GT] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_CR] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_PIPEH] = ACTIONS(158),
    [anon_sym_PIPET] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(160),
    [anon_sym_AT_ATdbt] = ACTIONS(160),
    [anon_sym_AT_ATdbta] = ACTIONS(158),
    [anon_sym_AT_ATdbtb] = ACTIONS(158),
    [anon_sym_AT_ATdbts] = ACTIONS(158),
    [anon_sym_AT_AT_DOT] = ACTIONS(158),
    [anon_sym_AT_AT_EQ] = ACTIONS(158),
    [anon_sym_AT_ATk] = ACTIONS(158),
    [anon_sym_AT_ATt] = ACTIONS(158),
    [anon_sym_AT_ATb] = ACTIONS(158),
    [anon_sym_AT_ATi] = ACTIONS(160),
    [anon_sym_AT_ATiS] = ACTIONS(158),
    [anon_sym_AT_ATf] = ACTIONS(158),
    [anon_sym_AT_ATs_COLON] = ACTIONS(158),
    [anon_sym_AT_ATc_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_AT_BANG] = ACTIONS(158),
    [anon_sym_AT_LPAREN] = ACTIONS(158),
    [anon_sym_ATa_COLON] = ACTIONS(158),
    [anon_sym_ATb_COLON] = ACTIONS(158),
    [anon_sym_ATB_COLON] = ACTIONS(158),
    [anon_sym_ATe_COLON] = ACTIONS(158),
    [anon_sym_ATF_COLON] = ACTIONS(158),
    [anon_sym_ATi_COLON] = ACTIONS(158),
    [anon_sym_ATk_COLON] = ACTIONS(158),
    [anon_sym_ATo_COLON] = ACTIONS(158),
    [anon_sym_ATr_COLON] = ACTIONS(158),
    [anon_sym_ATf_COLON] = ACTIONS(158),
    [anon_sym_ATs_COLON] = ACTIONS(158),
    [anon_sym_ATx_COLON] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_1_GT] = ACTIONS(160),
    [anon_sym_2_GT] = ACTIONS(160),
    [anon_sym_H_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_1_GT_GT] = ACTIONS(158),
    [anon_sym_2_GT_GT] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_PIPEH] = ACTIONS(170),
    [anon_sym_PIPET] = ACTIONS(170),
    [anon_sym_AT_AT] = ACTIONS(172),
    [anon_sym_AT_ATdbt] = ACTIONS(172),
    [anon_sym_AT_ATdbta] = ACTIONS(170),
    [anon_sym_AT_ATdbtb] = ACTIONS(170),
    [anon_sym_AT_ATdbts] = ACTIONS(170),
    [anon_sym_AT_AT_DOT] = ACTIONS(170),
    [anon_sym_AT_AT_EQ] = ACTIONS(170),
    [anon_sym_AT_ATk] = ACTIONS(170),
    [anon_sym_AT_ATt] = ACTIONS(170),
    [anon_sym_AT_ATb] = ACTIONS(170),
    [anon_sym_AT_ATi] = ACTIONS(172),
    [anon_sym_AT_ATiS] = ACTIONS(170),
    [anon_sym_AT_ATf] = ACTIONS(170),
    [anon_sym_AT_ATs_COLON] = ACTIONS(170),
    [anon_sym_AT_ATc_COLON] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_AT_BANG] = ACTIONS(170),
    [anon_sym_AT_LPAREN] = ACTIONS(170),
    [anon_sym_ATa_COLON] = ACTIONS(170),
    [anon_sym_ATb_COLON] = ACTIONS(170),
    [anon_sym_ATB_COLON] = ACTIONS(170),
    [anon_sym_ATe_COLON] = ACTIONS(170),
    [anon_sym_ATF_COLON] = ACTIONS(170),
    [anon_sym_ATi_COLON] = ACTIONS(170),
    [anon_sym_ATk_COLON] = ACTIONS(170),
    [anon_sym_ATo_COLON] = ACTIONS(170),
    [anon_sym_ATr_COLON] = ACTIONS(170),
    [anon_sym_ATf_COLON] = ACTIONS(170),
    [anon_sym_ATs_COLON] = ACTIONS(170),
    [anon_sym_ATx_COLON] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_1_GT] = ACTIONS(172),
    [anon_sym_2_GT] = ACTIONS(172),
    [anon_sym_H_GT] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(170),
    [anon_sym_1_GT_GT] = ACTIONS(170),
    [anon_sym_2_GT_GT] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(337),
    [anon_sym_PIPET] = ACTIONS(337),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(337),
    [anon_sym_AT_ATdbtb] = ACTIONS(337),
    [anon_sym_AT_ATdbts] = ACTIONS(337),
    [anon_sym_AT_AT_DOT] = ACTIONS(337),
    [anon_sym_AT_AT_EQ] = ACTIONS(337),
    [anon_sym_AT_ATk] = ACTIONS(337),
    [anon_sym_AT_ATt] = ACTIONS(337),
    [anon_sym_AT_ATb] = ACTIONS(337),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(337),
    [anon_sym_AT_ATf] = ACTIONS(337),
    [anon_sym_AT_ATs_COLON] = ACTIONS(337),
    [anon_sym_AT_ATc_COLON] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_AT_BANG] = ACTIONS(337),
    [anon_sym_AT_LPAREN] = ACTIONS(337),
    [anon_sym_ATa_COLON] = ACTIONS(337),
    [anon_sym_ATb_COLON] = ACTIONS(337),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(337),
    [anon_sym_ATF_COLON] = ACTIONS(337),
    [anon_sym_ATi_COLON] = ACTIONS(337),
    [anon_sym_ATk_COLON] = ACTIONS(337),
    [anon_sym_ATo_COLON] = ACTIONS(337),
    [anon_sym_ATr_COLON] = ACTIONS(337),
    [anon_sym_ATf_COLON] = ACTIONS(337),
    [anon_sym_ATs_COLON] = ACTIONS(337),
    [anon_sym_ATx_COLON] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_1_GT] = ACTIONS(339),
    [anon_sym_2_GT] = ACTIONS(339),
    [anon_sym_H_GT] = ACTIONS(337),
    [anon_sym_GT_GT] = ACTIONS(337),
    [anon_sym_1_GT_GT] = ACTIONS(337),
    [anon_sym_2_GT_GT] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(337),
    [anon_sym_CR] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(341),
    [anon_sym_PIPET] = ACTIONS(341),
    [anon_sym_AT_AT] = ACTIONS(343),
    [anon_sym_AT_ATdbt] = ACTIONS(343),
    [anon_sym_AT_ATdbta] = ACTIONS(341),
    [anon_sym_AT_ATdbtb] = ACTIONS(341),
    [anon_sym_AT_ATdbts] = ACTIONS(341),
    [anon_sym_AT_AT_DOT] = ACTIONS(341),
    [anon_sym_AT_AT_EQ] = ACTIONS(341),
    [anon_sym_AT_ATk] = ACTIONS(341),
    [anon_sym_AT_ATt] = ACTIONS(341),
    [anon_sym_AT_ATb] = ACTIONS(341),
    [anon_sym_AT_ATi] = ACTIONS(343),
    [anon_sym_AT_ATiS] = ACTIONS(341),
    [anon_sym_AT_ATf] = ACTIONS(341),
    [anon_sym_AT_ATs_COLON] = ACTIONS(341),
    [anon_sym_AT_ATc_COLON] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_AT_BANG] = ACTIONS(341),
    [anon_sym_AT_LPAREN] = ACTIONS(341),
    [anon_sym_ATa_COLON] = ACTIONS(341),
    [anon_sym_ATb_COLON] = ACTIONS(341),
    [anon_sym_ATB_COLON] = ACTIONS(341),
    [anon_sym_ATe_COLON] = ACTIONS(341),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(341),
    [anon_sym_ATk_COLON] = ACTIONS(341),
    [anon_sym_ATo_COLON] = ACTIONS(341),
    [anon_sym_ATr_COLON] = ACTIONS(341),
    [anon_sym_ATf_COLON] = ACTIONS(341),
    [anon_sym_ATs_COLON] = ACTIONS(341),
    [anon_sym_ATx_COLON] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_1_GT] = ACTIONS(343),
    [anon_sym_2_GT] = ACTIONS(343),
    [anon_sym_H_GT] = ACTIONS(341),
    [anon_sym_GT_GT] = ACTIONS(341),
    [anon_sym_1_GT_GT] = ACTIONS(341),
    [anon_sym_2_GT_GT] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(341),
    [anon_sym_CR] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPEH] = ACTIONS(345),
    [anon_sym_PIPET] = ACTIONS(345),
    [anon_sym_AT_AT] = ACTIONS(347),
    [anon_sym_AT_ATdbt] = ACTIONS(347),
    [anon_sym_AT_ATdbta] = ACTIONS(345),
    [anon_sym_AT_ATdbtb] = ACTIONS(345),
    [anon_sym_AT_ATdbts] = ACTIONS(345),
    [anon_sym_AT_AT_DOT] = ACTIONS(345),
    [anon_sym_AT_AT_EQ] = ACTIONS(345),
    [anon_sym_AT_ATk] = ACTIONS(345),
    [anon_sym_AT_ATt] = ACTIONS(345),
    [anon_sym_AT_ATb] = ACTIONS(345),
    [anon_sym_AT_ATi] = ACTIONS(347),
    [anon_sym_AT_ATiS] = ACTIONS(345),
    [anon_sym_AT_ATf] = ACTIONS(345),
    [anon_sym_AT_ATs_COLON] = ACTIONS(345),
    [anon_sym_AT_ATc_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_AT_BANG] = ACTIONS(345),
    [anon_sym_AT_LPAREN] = ACTIONS(345),
    [anon_sym_ATa_COLON] = ACTIONS(345),
    [anon_sym_ATb_COLON] = ACTIONS(345),
    [anon_sym_ATB_COLON] = ACTIONS(345),
    [anon_sym_ATe_COLON] = ACTIONS(345),
    [anon_sym_ATF_COLON] = ACTIONS(345),
    [anon_sym_ATi_COLON] = ACTIONS(345),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(345),
    [anon_sym_ATr_COLON] = ACTIONS(345),
    [anon_sym_ATf_COLON] = ACTIONS(345),
    [anon_sym_ATs_COLON] = ACTIONS(345),
    [anon_sym_ATx_COLON] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_1_GT] = ACTIONS(347),
    [anon_sym_2_GT] = ACTIONS(347),
    [anon_sym_H_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_1_GT_GT] = ACTIONS(345),
    [anon_sym_2_GT_GT] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_CR] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPEH] = ACTIONS(349),
    [anon_sym_PIPET] = ACTIONS(349),
    [anon_sym_AT_AT] = ACTIONS(351),
    [anon_sym_AT_ATdbt] = ACTIONS(351),
    [anon_sym_AT_ATdbta] = ACTIONS(349),
    [anon_sym_AT_ATdbtb] = ACTIONS(349),
    [anon_sym_AT_ATdbts] = ACTIONS(349),
    [anon_sym_AT_AT_DOT] = ACTIONS(349),
    [anon_sym_AT_AT_EQ] = ACTIONS(349),
    [anon_sym_AT_ATk] = ACTIONS(349),
    [anon_sym_AT_ATt] = ACTIONS(349),
    [anon_sym_AT_ATb] = ACTIONS(349),
    [anon_sym_AT_ATi] = ACTIONS(351),
    [anon_sym_AT_ATiS] = ACTIONS(349),
    [anon_sym_AT_ATf] = ACTIONS(349),
    [anon_sym_AT_ATs_COLON] = ACTIONS(349),
    [anon_sym_AT_ATc_COLON] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(351),
    [anon_sym_AT_BANG] = ACTIONS(349),
    [anon_sym_AT_LPAREN] = ACTIONS(349),
    [anon_sym_ATa_COLON] = ACTIONS(349),
    [anon_sym_ATb_COLON] = ACTIONS(349),
    [anon_sym_ATB_COLON] = ACTIONS(349),
    [anon_sym_ATe_COLON] = ACTIONS(349),
    [anon_sym_ATF_COLON] = ACTIONS(349),
    [anon_sym_ATi_COLON] = ACTIONS(349),
    [anon_sym_ATk_COLON] = ACTIONS(349),
    [anon_sym_ATo_COLON] = ACTIONS(349),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(349),
    [anon_sym_ATs_COLON] = ACTIONS(349),
    [anon_sym_ATx_COLON] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_1_GT] = ACTIONS(351),
    [anon_sym_2_GT] = ACTIONS(351),
    [anon_sym_H_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_1_GT_GT] = ACTIONS(349),
    [anon_sym_2_GT_GT] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_CR] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPEH] = ACTIONS(353),
    [anon_sym_PIPET] = ACTIONS(353),
    [anon_sym_AT_AT] = ACTIONS(355),
    [anon_sym_AT_ATdbt] = ACTIONS(355),
    [anon_sym_AT_ATdbta] = ACTIONS(353),
    [anon_sym_AT_ATdbtb] = ACTIONS(353),
    [anon_sym_AT_ATdbts] = ACTIONS(353),
    [anon_sym_AT_AT_DOT] = ACTIONS(353),
    [anon_sym_AT_AT_EQ] = ACTIONS(353),
    [anon_sym_AT_ATk] = ACTIONS(353),
    [anon_sym_AT_ATt] = ACTIONS(353),
    [anon_sym_AT_ATb] = ACTIONS(353),
    [anon_sym_AT_ATi] = ACTIONS(355),
    [anon_sym_AT_ATiS] = ACTIONS(353),
    [anon_sym_AT_ATf] = ACTIONS(353),
    [anon_sym_AT_ATs_COLON] = ACTIONS(353),
    [anon_sym_AT_ATc_COLON] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_AT_BANG] = ACTIONS(353),
    [anon_sym_AT_LPAREN] = ACTIONS(353),
    [anon_sym_ATa_COLON] = ACTIONS(353),
    [anon_sym_ATb_COLON] = ACTIONS(353),
    [anon_sym_ATB_COLON] = ACTIONS(353),
    [anon_sym_ATe_COLON] = ACTIONS(353),
    [anon_sym_ATF_COLON] = ACTIONS(353),
    [anon_sym_ATi_COLON] = ACTIONS(353),
    [anon_sym_ATk_COLON] = ACTIONS(353),
    [anon_sym_ATo_COLON] = ACTIONS(353),
    [anon_sym_ATr_COLON] = ACTIONS(353),
    [anon_sym_ATf_COLON] = ACTIONS(353),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_1_GT] = ACTIONS(355),
    [anon_sym_2_GT] = ACTIONS(355),
    [anon_sym_H_GT] = ACTIONS(353),
    [anon_sym_GT_GT] = ACTIONS(353),
    [anon_sym_1_GT_GT] = ACTIONS(353),
    [anon_sym_2_GT_GT] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(353),
    [anon_sym_CR] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_PIPEH] = ACTIONS(357),
    [anon_sym_PIPET] = ACTIONS(357),
    [anon_sym_AT_AT] = ACTIONS(359),
    [anon_sym_AT_ATdbt] = ACTIONS(359),
    [anon_sym_AT_ATdbta] = ACTIONS(357),
    [anon_sym_AT_ATdbtb] = ACTIONS(357),
    [anon_sym_AT_ATdbts] = ACTIONS(357),
    [anon_sym_AT_AT_DOT] = ACTIONS(357),
    [anon_sym_AT_AT_EQ] = ACTIONS(357),
    [anon_sym_AT_ATk] = ACTIONS(357),
    [anon_sym_AT_ATt] = ACTIONS(357),
    [anon_sym_AT_ATb] = ACTIONS(357),
    [anon_sym_AT_ATi] = ACTIONS(359),
    [anon_sym_AT_ATiS] = ACTIONS(357),
    [anon_sym_AT_ATf] = ACTIONS(357),
    [anon_sym_AT_ATs_COLON] = ACTIONS(357),
    [anon_sym_AT_ATc_COLON] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_AT_BANG] = ACTIONS(357),
    [anon_sym_AT_LPAREN] = ACTIONS(357),
    [anon_sym_ATa_COLON] = ACTIONS(357),
    [anon_sym_ATb_COLON] = ACTIONS(357),
    [anon_sym_ATB_COLON] = ACTIONS(357),
    [anon_sym_ATe_COLON] = ACTIONS(357),
    [anon_sym_ATF_COLON] = ACTIONS(357),
    [anon_sym_ATi_COLON] = ACTIONS(357),
    [anon_sym_ATk_COLON] = ACTIONS(357),
    [anon_sym_ATo_COLON] = ACTIONS(357),
    [anon_sym_ATr_COLON] = ACTIONS(357),
    [anon_sym_ATf_COLON] = ACTIONS(357),
    [anon_sym_ATs_COLON] = ACTIONS(357),
    [anon_sym_ATx_COLON] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_1_GT] = ACTIONS(359),
    [anon_sym_2_GT] = ACTIONS(359),
    [anon_sym_H_GT] = ACTIONS(357),
    [anon_sym_GT_GT] = ACTIONS(357),
    [anon_sym_1_GT_GT] = ACTIONS(357),
    [anon_sym_2_GT_GT] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(357),
    [anon_sym_CR] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPEH] = ACTIONS(361),
    [anon_sym_PIPET] = ACTIONS(361),
    [anon_sym_AT_AT] = ACTIONS(363),
    [anon_sym_AT_ATdbt] = ACTIONS(363),
    [anon_sym_AT_ATdbta] = ACTIONS(361),
    [anon_sym_AT_ATdbtb] = ACTIONS(361),
    [anon_sym_AT_ATdbts] = ACTIONS(361),
    [anon_sym_AT_AT_DOT] = ACTIONS(361),
    [anon_sym_AT_AT_EQ] = ACTIONS(361),
    [anon_sym_AT_ATk] = ACTIONS(361),
    [anon_sym_AT_ATt] = ACTIONS(361),
    [anon_sym_AT_ATb] = ACTIONS(361),
    [anon_sym_AT_ATi] = ACTIONS(363),
    [anon_sym_AT_ATiS] = ACTIONS(361),
    [anon_sym_AT_ATf] = ACTIONS(361),
    [anon_sym_AT_ATs_COLON] = ACTIONS(361),
    [anon_sym_AT_ATc_COLON] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(363),
    [anon_sym_AT_BANG] = ACTIONS(361),
    [anon_sym_AT_LPAREN] = ACTIONS(361),
    [anon_sym_ATa_COLON] = ACTIONS(361),
    [anon_sym_ATb_COLON] = ACTIONS(361),
    [anon_sym_ATB_COLON] = ACTIONS(361),
    [anon_sym_ATe_COLON] = ACTIONS(361),
    [anon_sym_ATF_COLON] = ACTIONS(361),
    [anon_sym_ATi_COLON] = ACTIONS(361),
    [anon_sym_ATk_COLON] = ACTIONS(361),
    [anon_sym_ATo_COLON] = ACTIONS(361),
    [anon_sym_ATr_COLON] = ACTIONS(361),
    [anon_sym_ATf_COLON] = ACTIONS(361),
    [anon_sym_ATs_COLON] = ACTIONS(361),
    [anon_sym_ATx_COLON] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_1_GT] = ACTIONS(363),
    [anon_sym_2_GT] = ACTIONS(363),
    [anon_sym_H_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_1_GT_GT] = ACTIONS(361),
    [anon_sym_2_GT_GT] = ACTIONS(361),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(361),
    [anon_sym_CR] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_PIPEH] = ACTIONS(365),
    [anon_sym_PIPET] = ACTIONS(365),
    [anon_sym_AT_AT] = ACTIONS(367),
    [anon_sym_AT_ATdbt] = ACTIONS(367),
    [anon_sym_AT_ATdbta] = ACTIONS(365),
    [anon_sym_AT_ATdbtb] = ACTIONS(365),
    [anon_sym_AT_ATdbts] = ACTIONS(365),
    [anon_sym_AT_AT_DOT] = ACTIONS(365),
    [anon_sym_AT_AT_EQ] = ACTIONS(365),
    [anon_sym_AT_ATk] = ACTIONS(365),
    [anon_sym_AT_ATt] = ACTIONS(365),
    [anon_sym_AT_ATb] = ACTIONS(365),
    [anon_sym_AT_ATi] = ACTIONS(367),
    [anon_sym_AT_ATiS] = ACTIONS(365),
    [anon_sym_AT_ATf] = ACTIONS(365),
    [anon_sym_AT_ATs_COLON] = ACTIONS(365),
    [anon_sym_AT_ATc_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(367),
    [anon_sym_AT_BANG] = ACTIONS(365),
    [anon_sym_AT_LPAREN] = ACTIONS(365),
    [anon_sym_ATa_COLON] = ACTIONS(365),
    [anon_sym_ATb_COLON] = ACTIONS(365),
    [anon_sym_ATB_COLON] = ACTIONS(365),
    [anon_sym_ATe_COLON] = ACTIONS(365),
    [anon_sym_ATF_COLON] = ACTIONS(365),
    [anon_sym_ATi_COLON] = ACTIONS(365),
    [anon_sym_ATk_COLON] = ACTIONS(365),
    [anon_sym_ATo_COLON] = ACTIONS(365),
    [anon_sym_ATr_COLON] = ACTIONS(365),
    [anon_sym_ATf_COLON] = ACTIONS(365),
    [anon_sym_ATs_COLON] = ACTIONS(365),
    [anon_sym_ATx_COLON] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_1_GT] = ACTIONS(367),
    [anon_sym_2_GT] = ACTIONS(367),
    [anon_sym_H_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_1_GT_GT] = ACTIONS(365),
    [anon_sym_2_GT_GT] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(365),
    [anon_sym_CR] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(142),
    [anon_sym_PIPET] = ACTIONS(142),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(142),
    [anon_sym_AT_ATdbtb] = ACTIONS(142),
    [anon_sym_AT_ATdbts] = ACTIONS(142),
    [anon_sym_AT_AT_DOT] = ACTIONS(142),
    [anon_sym_AT_AT_EQ] = ACTIONS(142),
    [anon_sym_AT_ATk] = ACTIONS(142),
    [anon_sym_AT_ATt] = ACTIONS(142),
    [anon_sym_AT_ATb] = ACTIONS(142),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(142),
    [anon_sym_AT_ATf] = ACTIONS(142),
    [anon_sym_AT_ATs_COLON] = ACTIONS(142),
    [anon_sym_AT_ATc_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(142),
    [anon_sym_AT_LPAREN] = ACTIONS(142),
    [anon_sym_ATa_COLON] = ACTIONS(142),
    [anon_sym_ATb_COLON] = ACTIONS(142),
    [anon_sym_ATB_COLON] = ACTIONS(142),
    [anon_sym_ATe_COLON] = ACTIONS(142),
    [anon_sym_ATF_COLON] = ACTIONS(142),
    [anon_sym_ATi_COLON] = ACTIONS(142),
    [anon_sym_ATk_COLON] = ACTIONS(142),
    [anon_sym_ATo_COLON] = ACTIONS(142),
    [anon_sym_ATr_COLON] = ACTIONS(142),
    [anon_sym_ATf_COLON] = ACTIONS(142),
    [anon_sym_ATs_COLON] = ACTIONS(142),
    [anon_sym_ATx_COLON] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_1_GT_GT] = ACTIONS(142),
    [anon_sym_2_GT_GT] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_CR] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPEH] = ACTIONS(369),
    [anon_sym_PIPET] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(371),
    [anon_sym_AT_ATdbt] = ACTIONS(371),
    [anon_sym_AT_ATdbta] = ACTIONS(369),
    [anon_sym_AT_ATdbtb] = ACTIONS(369),
    [anon_sym_AT_ATdbts] = ACTIONS(369),
    [anon_sym_AT_AT_DOT] = ACTIONS(369),
    [anon_sym_AT_AT_EQ] = ACTIONS(369),
    [anon_sym_AT_ATk] = ACTIONS(369),
    [anon_sym_AT_ATt] = ACTIONS(369),
    [anon_sym_AT_ATb] = ACTIONS(369),
    [anon_sym_AT_ATi] = ACTIONS(371),
    [anon_sym_AT_ATiS] = ACTIONS(369),
    [anon_sym_AT_ATf] = ACTIONS(369),
    [anon_sym_AT_ATs_COLON] = ACTIONS(369),
    [anon_sym_AT_ATc_COLON] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(371),
    [anon_sym_AT_BANG] = ACTIONS(369),
    [anon_sym_AT_LPAREN] = ACTIONS(369),
    [anon_sym_ATa_COLON] = ACTIONS(369),
    [anon_sym_ATb_COLON] = ACTIONS(369),
    [anon_sym_ATB_COLON] = ACTIONS(369),
    [anon_sym_ATe_COLON] = ACTIONS(369),
    [anon_sym_ATF_COLON] = ACTIONS(369),
    [anon_sym_ATi_COLON] = ACTIONS(369),
    [anon_sym_ATk_COLON] = ACTIONS(369),
    [anon_sym_ATo_COLON] = ACTIONS(369),
    [anon_sym_ATr_COLON] = ACTIONS(369),
    [anon_sym_ATf_COLON] = ACTIONS(369),
    [anon_sym_ATs_COLON] = ACTIONS(369),
    [anon_sym_ATx_COLON] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_1_GT] = ACTIONS(371),
    [anon_sym_2_GT] = ACTIONS(371),
    [anon_sym_H_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_1_GT_GT] = ACTIONS(369),
    [anon_sym_2_GT_GT] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(369),
    [anon_sym_CR] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(142),
    [anon_sym_PIPET] = ACTIONS(142),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(142),
    [anon_sym_AT_ATdbtb] = ACTIONS(142),
    [anon_sym_AT_ATdbts] = ACTIONS(142),
    [anon_sym_AT_AT_DOT] = ACTIONS(142),
    [anon_sym_AT_AT_EQ] = ACTIONS(142),
    [anon_sym_AT_ATk] = ACTIONS(142),
    [anon_sym_AT_ATt] = ACTIONS(142),
    [anon_sym_AT_ATb] = ACTIONS(142),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(142),
    [anon_sym_AT_ATf] = ACTIONS(142),
    [anon_sym_AT_ATs_COLON] = ACTIONS(142),
    [anon_sym_AT_ATc_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(142),
    [anon_sym_AT_LPAREN] = ACTIONS(142),
    [anon_sym_ATa_COLON] = ACTIONS(142),
    [anon_sym_ATb_COLON] = ACTIONS(142),
    [anon_sym_ATB_COLON] = ACTIONS(142),
    [anon_sym_ATe_COLON] = ACTIONS(142),
    [anon_sym_ATF_COLON] = ACTIONS(142),
    [anon_sym_ATi_COLON] = ACTIONS(142),
    [anon_sym_ATk_COLON] = ACTIONS(142),
    [anon_sym_ATo_COLON] = ACTIONS(142),
    [anon_sym_ATr_COLON] = ACTIONS(142),
    [anon_sym_ATf_COLON] = ACTIONS(142),
    [anon_sym_ATs_COLON] = ACTIONS(142),
    [anon_sym_ATx_COLON] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_1_GT_GT] = ACTIONS(142),
    [anon_sym_2_GT_GT] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_CR] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PIPEH] = ACTIONS(373),
    [anon_sym_PIPET] = ACTIONS(373),
    [anon_sym_AT_AT] = ACTIONS(375),
    [anon_sym_AT_ATdbt] = ACTIONS(375),
    [anon_sym_AT_ATdbta] = ACTIONS(373),
    [anon_sym_AT_ATdbtb] = ACTIONS(373),
    [anon_sym_AT_ATdbts] = ACTIONS(373),
    [anon_sym_AT_AT_DOT] = ACTIONS(373),
    [anon_sym_AT_AT_EQ] = ACTIONS(373),
    [anon_sym_AT_ATk] = ACTIONS(373),
    [anon_sym_AT_ATt] = ACTIONS(373),
    [anon_sym_AT_ATb] = ACTIONS(373),
    [anon_sym_AT_ATi] = ACTIONS(375),
    [anon_sym_AT_ATiS] = ACTIONS(373),
    [anon_sym_AT_ATf] = ACTIONS(373),
    [anon_sym_AT_ATs_COLON] = ACTIONS(373),
    [anon_sym_AT_ATc_COLON] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_AT_BANG] = ACTIONS(373),
    [anon_sym_AT_LPAREN] = ACTIONS(373),
    [anon_sym_ATa_COLON] = ACTIONS(373),
    [anon_sym_ATb_COLON] = ACTIONS(373),
    [anon_sym_ATB_COLON] = ACTIONS(373),
    [anon_sym_ATe_COLON] = ACTIONS(373),
    [anon_sym_ATF_COLON] = ACTIONS(373),
    [anon_sym_ATi_COLON] = ACTIONS(373),
    [anon_sym_ATk_COLON] = ACTIONS(373),
    [anon_sym_ATo_COLON] = ACTIONS(373),
    [anon_sym_ATr_COLON] = ACTIONS(373),
    [anon_sym_ATf_COLON] = ACTIONS(373),
    [anon_sym_ATs_COLON] = ACTIONS(373),
    [anon_sym_ATx_COLON] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_1_GT] = ACTIONS(375),
    [anon_sym_2_GT] = ACTIONS(375),
    [anon_sym_H_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(373),
    [anon_sym_1_GT_GT] = ACTIONS(373),
    [anon_sym_2_GT_GT] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(373),
    [anon_sym_CR] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPEH] = ACTIONS(377),
    [anon_sym_PIPET] = ACTIONS(377),
    [anon_sym_AT_AT] = ACTIONS(379),
    [anon_sym_AT_ATdbt] = ACTIONS(379),
    [anon_sym_AT_ATdbta] = ACTIONS(377),
    [anon_sym_AT_ATdbtb] = ACTIONS(377),
    [anon_sym_AT_ATdbts] = ACTIONS(377),
    [anon_sym_AT_AT_DOT] = ACTIONS(377),
    [anon_sym_AT_AT_EQ] = ACTIONS(377),
    [anon_sym_AT_ATk] = ACTIONS(377),
    [anon_sym_AT_ATt] = ACTIONS(377),
    [anon_sym_AT_ATb] = ACTIONS(377),
    [anon_sym_AT_ATi] = ACTIONS(379),
    [anon_sym_AT_ATiS] = ACTIONS(377),
    [anon_sym_AT_ATf] = ACTIONS(377),
    [anon_sym_AT_ATs_COLON] = ACTIONS(377),
    [anon_sym_AT_ATc_COLON] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_AT_BANG] = ACTIONS(377),
    [anon_sym_AT_LPAREN] = ACTIONS(377),
    [anon_sym_ATa_COLON] = ACTIONS(377),
    [anon_sym_ATb_COLON] = ACTIONS(377),
    [anon_sym_ATB_COLON] = ACTIONS(377),
    [anon_sym_ATe_COLON] = ACTIONS(377),
    [anon_sym_ATF_COLON] = ACTIONS(377),
    [anon_sym_ATi_COLON] = ACTIONS(377),
    [anon_sym_ATk_COLON] = ACTIONS(377),
    [anon_sym_ATo_COLON] = ACTIONS(377),
    [anon_sym_ATr_COLON] = ACTIONS(377),
    [anon_sym_ATf_COLON] = ACTIONS(377),
    [anon_sym_ATs_COLON] = ACTIONS(377),
    [anon_sym_ATx_COLON] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_1_GT] = ACTIONS(379),
    [anon_sym_2_GT] = ACTIONS(379),
    [anon_sym_H_GT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(377),
    [anon_sym_1_GT_GT] = ACTIONS(377),
    [anon_sym_2_GT_GT] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_CR] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_PIPEH] = ACTIONS(381),
    [anon_sym_PIPET] = ACTIONS(381),
    [anon_sym_AT_AT] = ACTIONS(383),
    [anon_sym_AT_ATdbt] = ACTIONS(383),
    [anon_sym_AT_ATdbta] = ACTIONS(381),
    [anon_sym_AT_ATdbtb] = ACTIONS(381),
    [anon_sym_AT_ATdbts] = ACTIONS(381),
    [anon_sym_AT_AT_DOT] = ACTIONS(381),
    [anon_sym_AT_AT_EQ] = ACTIONS(381),
    [anon_sym_AT_ATk] = ACTIONS(381),
    [anon_sym_AT_ATt] = ACTIONS(381),
    [anon_sym_AT_ATb] = ACTIONS(381),
    [anon_sym_AT_ATi] = ACTIONS(383),
    [anon_sym_AT_ATiS] = ACTIONS(381),
    [anon_sym_AT_ATf] = ACTIONS(381),
    [anon_sym_AT_ATs_COLON] = ACTIONS(381),
    [anon_sym_AT_ATc_COLON] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_AT_BANG] = ACTIONS(381),
    [anon_sym_AT_LPAREN] = ACTIONS(381),
    [anon_sym_ATa_COLON] = ACTIONS(381),
    [anon_sym_ATb_COLON] = ACTIONS(381),
    [anon_sym_ATB_COLON] = ACTIONS(381),
    [anon_sym_ATe_COLON] = ACTIONS(381),
    [anon_sym_ATF_COLON] = ACTIONS(381),
    [anon_sym_ATi_COLON] = ACTIONS(381),
    [anon_sym_ATk_COLON] = ACTIONS(381),
    [anon_sym_ATo_COLON] = ACTIONS(381),
    [anon_sym_ATr_COLON] = ACTIONS(381),
    [anon_sym_ATf_COLON] = ACTIONS(381),
    [anon_sym_ATs_COLON] = ACTIONS(381),
    [anon_sym_ATx_COLON] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_1_GT] = ACTIONS(383),
    [anon_sym_2_GT] = ACTIONS(383),
    [anon_sym_H_GT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_1_GT_GT] = ACTIONS(381),
    [anon_sym_2_GT_GT] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_CR] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
  },
  [100] = {
    [sym_system_arg] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_AT_BANG] = ACTIONS(387),
    [anon_sym_AT_LPAREN] = ACTIONS(387),
    [anon_sym_ATa_COLON] = ACTIONS(387),
    [anon_sym_ATb_COLON] = ACTIONS(387),
    [anon_sym_ATB_COLON] = ACTIONS(387),
    [anon_sym_ATe_COLON] = ACTIONS(387),
    [anon_sym_ATF_COLON] = ACTIONS(387),
    [anon_sym_ATi_COLON] = ACTIONS(387),
    [anon_sym_ATk_COLON] = ACTIONS(387),
    [anon_sym_ATo_COLON] = ACTIONS(387),
    [anon_sym_ATr_COLON] = ACTIONS(387),
    [anon_sym_ATf_COLON] = ACTIONS(387),
    [anon_sym_ATs_COLON] = ACTIONS(387),
    [anon_sym_ATx_COLON] = ACTIONS(387),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_1_GT] = ACTIONS(387),
    [anon_sym_2_GT] = ACTIONS(387),
    [anon_sym_H_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_1_GT_GT] = ACTIONS(387),
    [anon_sym_2_GT_GT] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_CR] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPEH] = ACTIONS(391),
    [anon_sym_PIPET] = ACTIONS(391),
    [anon_sym_AT_AT] = ACTIONS(393),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(391),
    [anon_sym_AT_ATdbtb] = ACTIONS(391),
    [anon_sym_AT_ATdbts] = ACTIONS(391),
    [anon_sym_AT_AT_DOT] = ACTIONS(391),
    [anon_sym_AT_AT_EQ] = ACTIONS(391),
    [anon_sym_AT_ATk] = ACTIONS(391),
    [anon_sym_AT_ATt] = ACTIONS(391),
    [anon_sym_AT_ATb] = ACTIONS(391),
    [anon_sym_AT_ATi] = ACTIONS(393),
    [anon_sym_AT_ATiS] = ACTIONS(391),
    [anon_sym_AT_ATf] = ACTIONS(391),
    [anon_sym_AT_ATs_COLON] = ACTIONS(391),
    [anon_sym_AT_ATc_COLON] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_AT_BANG] = ACTIONS(391),
    [anon_sym_AT_LPAREN] = ACTIONS(391),
    [anon_sym_ATa_COLON] = ACTIONS(391),
    [anon_sym_ATb_COLON] = ACTIONS(391),
    [anon_sym_ATB_COLON] = ACTIONS(391),
    [anon_sym_ATe_COLON] = ACTIONS(391),
    [anon_sym_ATF_COLON] = ACTIONS(391),
    [anon_sym_ATi_COLON] = ACTIONS(391),
    [anon_sym_ATk_COLON] = ACTIONS(391),
    [anon_sym_ATo_COLON] = ACTIONS(391),
    [anon_sym_ATr_COLON] = ACTIONS(391),
    [anon_sym_ATf_COLON] = ACTIONS(391),
    [anon_sym_ATs_COLON] = ACTIONS(391),
    [anon_sym_ATx_COLON] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_1_GT] = ACTIONS(393),
    [anon_sym_2_GT] = ACTIONS(393),
    [anon_sym_H_GT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(391),
    [anon_sym_1_GT_GT] = ACTIONS(391),
    [anon_sym_2_GT_GT] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_CR] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PIPEH] = ACTIONS(395),
    [anon_sym_PIPET] = ACTIONS(395),
    [anon_sym_AT_AT] = ACTIONS(397),
    [anon_sym_AT_ATdbt] = ACTIONS(397),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(395),
    [anon_sym_AT_ATdbts] = ACTIONS(395),
    [anon_sym_AT_AT_DOT] = ACTIONS(395),
    [anon_sym_AT_AT_EQ] = ACTIONS(395),
    [anon_sym_AT_ATk] = ACTIONS(395),
    [anon_sym_AT_ATt] = ACTIONS(395),
    [anon_sym_AT_ATb] = ACTIONS(395),
    [anon_sym_AT_ATi] = ACTIONS(397),
    [anon_sym_AT_ATiS] = ACTIONS(395),
    [anon_sym_AT_ATf] = ACTIONS(395),
    [anon_sym_AT_ATs_COLON] = ACTIONS(395),
    [anon_sym_AT_ATc_COLON] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_AT_BANG] = ACTIONS(395),
    [anon_sym_AT_LPAREN] = ACTIONS(395),
    [anon_sym_ATa_COLON] = ACTIONS(395),
    [anon_sym_ATb_COLON] = ACTIONS(395),
    [anon_sym_ATB_COLON] = ACTIONS(395),
    [anon_sym_ATe_COLON] = ACTIONS(395),
    [anon_sym_ATF_COLON] = ACTIONS(395),
    [anon_sym_ATi_COLON] = ACTIONS(395),
    [anon_sym_ATk_COLON] = ACTIONS(395),
    [anon_sym_ATo_COLON] = ACTIONS(395),
    [anon_sym_ATr_COLON] = ACTIONS(395),
    [anon_sym_ATf_COLON] = ACTIONS(395),
    [anon_sym_ATs_COLON] = ACTIONS(395),
    [anon_sym_ATx_COLON] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_1_GT] = ACTIONS(397),
    [anon_sym_2_GT] = ACTIONS(397),
    [anon_sym_H_GT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_1_GT_GT] = ACTIONS(395),
    [anon_sym_2_GT_GT] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_CR] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPEH] = ACTIONS(399),
    [anon_sym_PIPET] = ACTIONS(399),
    [anon_sym_AT_AT] = ACTIONS(401),
    [anon_sym_AT_ATdbt] = ACTIONS(401),
    [anon_sym_AT_ATdbta] = ACTIONS(399),
    [anon_sym_AT_ATdbtb] = ACTIONS(399),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(399),
    [anon_sym_AT_AT_EQ] = ACTIONS(399),
    [anon_sym_AT_ATk] = ACTIONS(399),
    [anon_sym_AT_ATt] = ACTIONS(399),
    [anon_sym_AT_ATb] = ACTIONS(399),
    [anon_sym_AT_ATi] = ACTIONS(401),
    [anon_sym_AT_ATiS] = ACTIONS(399),
    [anon_sym_AT_ATf] = ACTIONS(399),
    [anon_sym_AT_ATs_COLON] = ACTIONS(399),
    [anon_sym_AT_ATc_COLON] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_AT_BANG] = ACTIONS(399),
    [anon_sym_AT_LPAREN] = ACTIONS(399),
    [anon_sym_ATa_COLON] = ACTIONS(399),
    [anon_sym_ATb_COLON] = ACTIONS(399),
    [anon_sym_ATB_COLON] = ACTIONS(399),
    [anon_sym_ATe_COLON] = ACTIONS(399),
    [anon_sym_ATF_COLON] = ACTIONS(399),
    [anon_sym_ATi_COLON] = ACTIONS(399),
    [anon_sym_ATk_COLON] = ACTIONS(399),
    [anon_sym_ATo_COLON] = ACTIONS(399),
    [anon_sym_ATr_COLON] = ACTIONS(399),
    [anon_sym_ATf_COLON] = ACTIONS(399),
    [anon_sym_ATs_COLON] = ACTIONS(399),
    [anon_sym_ATx_COLON] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_1_GT] = ACTIONS(401),
    [anon_sym_2_GT] = ACTIONS(401),
    [anon_sym_H_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_1_GT_GT] = ACTIONS(399),
    [anon_sym_2_GT_GT] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_CR] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(399),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_1_GT] = ACTIONS(405),
    [anon_sym_2_GT] = ACTIONS(405),
    [anon_sym_H_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_1_GT_GT] = ACTIONS(403),
    [anon_sym_2_GT_GT] = ACTIONS(403),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_CR] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_1_GT] = ACTIONS(477),
    [anon_sym_2_GT] = ACTIONS(479),
    [anon_sym_H_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_1_GT_GT] = ACTIONS(483),
    [anon_sym_2_GT_GT] = ACTIONS(485),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(473),
    [anon_sym_CR] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(473),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_1_GT] = ACTIONS(489),
    [anon_sym_2_GT] = ACTIONS(489),
    [anon_sym_H_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_1_GT_GT] = ACTIONS(487),
    [anon_sym_2_GT_GT] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_CR] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
  },
  [107] = {
    [sym_pipe_second_command] = STATE(99),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPEH] = ACTIONS(253),
    [anon_sym_PIPET] = ACTIONS(253),
    [anon_sym_AT_AT] = ACTIONS(253),
    [anon_sym_AT_ATdbt] = ACTIONS(253),
    [anon_sym_AT_ATdbta] = ACTIONS(253),
    [anon_sym_AT_ATdbtb] = ACTIONS(253),
    [anon_sym_AT_ATdbts] = ACTIONS(253),
    [anon_sym_AT_AT_DOT] = ACTIONS(253),
    [anon_sym_AT_AT_EQ] = ACTIONS(253),
    [anon_sym_AT_ATk] = ACTIONS(253),
    [anon_sym_AT_ATt] = ACTIONS(253),
    [anon_sym_AT_ATb] = ACTIONS(253),
    [anon_sym_AT_ATi] = ACTIONS(253),
    [anon_sym_AT_ATiS] = ACTIONS(253),
    [anon_sym_AT_ATf] = ACTIONS(253),
    [anon_sym_AT_ATs_COLON] = ACTIONS(253),
    [anon_sym_AT_ATc_COLON] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [anon_sym_AT_BANG] = ACTIONS(253),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(253),
    [anon_sym_ATb_COLON] = ACTIONS(253),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(253),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(253),
    [anon_sym_ATr_COLON] = ACTIONS(253),
    [anon_sym_ATf_COLON] = ACTIONS(253),
    [anon_sym_ATs_COLON] = ACTIONS(253),
    [anon_sym_ATx_COLON] = ACTIONS(253),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_1_GT] = ACTIONS(253),
    [anon_sym_2_GT] = ACTIONS(253),
    [anon_sym_H_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_1_GT_GT] = ACTIONS(253),
    [anon_sym_2_GT_GT] = ACTIONS(253),
    [sym__any_command] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [108] = {
    [sym_system_arg] = STATE(54),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_AT_BANG] = ACTIONS(387),
    [anon_sym_AT_LPAREN] = ACTIONS(387),
    [anon_sym_ATa_COLON] = ACTIONS(387),
    [anon_sym_ATb_COLON] = ACTIONS(387),
    [anon_sym_ATB_COLON] = ACTIONS(387),
    [anon_sym_ATe_COLON] = ACTIONS(387),
    [anon_sym_ATF_COLON] = ACTIONS(387),
    [anon_sym_ATi_COLON] = ACTIONS(387),
    [anon_sym_ATk_COLON] = ACTIONS(387),
    [anon_sym_ATo_COLON] = ACTIONS(387),
    [anon_sym_ATr_COLON] = ACTIONS(387),
    [anon_sym_ATf_COLON] = ACTIONS(387),
    [anon_sym_ATs_COLON] = ACTIONS(387),
    [anon_sym_ATx_COLON] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_1_GT] = ACTIONS(387),
    [anon_sym_2_GT] = ACTIONS(387),
    [anon_sym_H_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_1_GT_GT] = ACTIONS(387),
    [anon_sym_2_GT_GT] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(387),
  },
  [109] = {
    [sym__eq_sep_args] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_PIPET] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT_AT_DOT] = ACTIONS(235),
    [anon_sym_AT_AT_EQ] = ACTIONS(235),
    [anon_sym_AT_ATk] = ACTIONS(235),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(235),
    [anon_sym_AT_ATi] = ACTIONS(235),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(235),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(235),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_ATa_COLON] = ACTIONS(235),
    [anon_sym_ATb_COLON] = ACTIONS(235),
    [anon_sym_ATB_COLON] = ACTIONS(235),
    [anon_sym_ATe_COLON] = ACTIONS(235),
    [anon_sym_ATF_COLON] = ACTIONS(235),
    [anon_sym_ATi_COLON] = ACTIONS(235),
    [anon_sym_ATk_COLON] = ACTIONS(235),
    [anon_sym_ATo_COLON] = ACTIONS(235),
    [anon_sym_ATr_COLON] = ACTIONS(235),
    [anon_sym_ATf_COLON] = ACTIONS(235),
    [anon_sym_ATs_COLON] = ACTIONS(235),
    [anon_sym_ATx_COLON] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_1_GT] = ACTIONS(235),
    [anon_sym_2_GT] = ACTIONS(235),
    [anon_sym_H_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_1_GT_GT] = ACTIONS(235),
    [anon_sym_2_GT_GT] = ACTIONS(235),
    [sym_eq_sep_key] = ACTIONS(237),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(235),
  },
  [110] = {
    [sym_pipe_second_command] = STATE(99),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPEH] = ACTIONS(253),
    [anon_sym_PIPET] = ACTIONS(253),
    [anon_sym_AT_AT] = ACTIONS(253),
    [anon_sym_AT_ATdbt] = ACTIONS(253),
    [anon_sym_AT_ATdbta] = ACTIONS(253),
    [anon_sym_AT_ATdbtb] = ACTIONS(253),
    [anon_sym_AT_ATdbts] = ACTIONS(253),
    [anon_sym_AT_AT_DOT] = ACTIONS(253),
    [anon_sym_AT_AT_EQ] = ACTIONS(253),
    [anon_sym_AT_ATk] = ACTIONS(253),
    [anon_sym_AT_ATt] = ACTIONS(253),
    [anon_sym_AT_ATb] = ACTIONS(253),
    [anon_sym_AT_ATi] = ACTIONS(253),
    [anon_sym_AT_ATiS] = ACTIONS(253),
    [anon_sym_AT_ATf] = ACTIONS(253),
    [anon_sym_AT_ATs_COLON] = ACTIONS(253),
    [anon_sym_AT_ATc_COLON] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [anon_sym_AT_BANG] = ACTIONS(253),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(253),
    [anon_sym_ATb_COLON] = ACTIONS(253),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(253),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(253),
    [anon_sym_ATr_COLON] = ACTIONS(253),
    [anon_sym_ATf_COLON] = ACTIONS(253),
    [anon_sym_ATs_COLON] = ACTIONS(253),
    [anon_sym_ATx_COLON] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_1_GT] = ACTIONS(253),
    [anon_sym_2_GT] = ACTIONS(253),
    [anon_sym_H_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_1_GT_GT] = ACTIONS(253),
    [anon_sym_2_GT_GT] = ACTIONS(253),
    [sym__any_command] = ACTIONS(255),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [111] = {
    [sym_system_arg] = STATE(54),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_AT_BANG] = ACTIONS(387),
    [anon_sym_AT_LPAREN] = ACTIONS(387),
    [anon_sym_ATa_COLON] = ACTIONS(387),
    [anon_sym_ATb_COLON] = ACTIONS(387),
    [anon_sym_ATB_COLON] = ACTIONS(387),
    [anon_sym_ATe_COLON] = ACTIONS(387),
    [anon_sym_ATF_COLON] = ACTIONS(387),
    [anon_sym_ATi_COLON] = ACTIONS(387),
    [anon_sym_ATk_COLON] = ACTIONS(387),
    [anon_sym_ATo_COLON] = ACTIONS(387),
    [anon_sym_ATr_COLON] = ACTIONS(387),
    [anon_sym_ATf_COLON] = ACTIONS(387),
    [anon_sym_ATs_COLON] = ACTIONS(387),
    [anon_sym_ATx_COLON] = ACTIONS(387),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_1_GT] = ACTIONS(387),
    [anon_sym_2_GT] = ACTIONS(387),
    [anon_sym_H_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_1_GT_GT] = ACTIONS(387),
    [anon_sym_2_GT_GT] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(387),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(387),
  },
  [112] = {
    [sym__eq_sep_args] = STATE(51),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_PIPET] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT_AT_DOT] = ACTIONS(235),
    [anon_sym_AT_AT_EQ] = ACTIONS(235),
    [anon_sym_AT_ATk] = ACTIONS(235),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(235),
    [anon_sym_AT_ATi] = ACTIONS(235),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(235),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(235),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_ATa_COLON] = ACTIONS(235),
    [anon_sym_ATb_COLON] = ACTIONS(235),
    [anon_sym_ATB_COLON] = ACTIONS(235),
    [anon_sym_ATe_COLON] = ACTIONS(235),
    [anon_sym_ATF_COLON] = ACTIONS(235),
    [anon_sym_ATi_COLON] = ACTIONS(235),
    [anon_sym_ATk_COLON] = ACTIONS(235),
    [anon_sym_ATo_COLON] = ACTIONS(235),
    [anon_sym_ATr_COLON] = ACTIONS(235),
    [anon_sym_ATf_COLON] = ACTIONS(235),
    [anon_sym_ATs_COLON] = ACTIONS(235),
    [anon_sym_ATx_COLON] = ACTIONS(235),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_1_GT] = ACTIONS(235),
    [anon_sym_2_GT] = ACTIONS(235),
    [anon_sym_H_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_1_GT_GT] = ACTIONS(235),
    [anon_sym_2_GT_GT] = ACTIONS(235),
    [sym_eq_sep_key] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(235),
  },
  [113] = {
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_1_GT] = ACTIONS(489),
    [anon_sym_2_GT] = ACTIONS(489),
    [anon_sym_H_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_1_GT_GT] = ACTIONS(487),
    [anon_sym_2_GT_GT] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(487),
  },
  [114] = {
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_1_GT] = ACTIONS(405),
    [anon_sym_2_GT] = ACTIONS(405),
    [anon_sym_H_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_1_GT_GT] = ACTIONS(403),
    [anon_sym_2_GT_GT] = ACTIONS(403),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(403),
  },
  [115] = {
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(497),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_1_GT] = ACTIONS(489),
    [anon_sym_2_GT] = ACTIONS(489),
    [anon_sym_H_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_1_GT_GT] = ACTIONS(487),
    [anon_sym_2_GT_GT] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(487),
  },
  [116] = {
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(497),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_1_GT] = ACTIONS(477),
    [anon_sym_2_GT] = ACTIONS(479),
    [anon_sym_H_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_1_GT_GT] = ACTIONS(483),
    [anon_sym_2_GT_GT] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(473),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(473),
  },
  [117] = {
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_1_GT] = ACTIONS(477),
    [anon_sym_2_GT] = ACTIONS(479),
    [anon_sym_H_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_1_GT_GT] = ACTIONS(483),
    [anon_sym_2_GT_GT] = ACTIONS(485),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(473),
  },
  [118] = {
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(497),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_1_GT] = ACTIONS(405),
    [anon_sym_2_GT] = ACTIONS(405),
    [anon_sym_H_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_1_GT_GT] = ACTIONS(403),
    [anon_sym_2_GT_GT] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(403),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(403),
  },
  [119] = {
    [aux_sym_commands_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [sym_interpreter_command] = ACTIONS(503),
    [anon_sym_LPAREN_STAR] = ACTIONS(501),
    [anon_sym_DOT_DASH] = ACTIONS(503),
    [anon_sym_DOT_BANG] = ACTIONS(501),
    [anon_sym_DOT_LPAREN] = ACTIONS(501),
    [anon_sym_DOT_SLASH] = ACTIONS(501),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(503),
    [aux_sym_interpret_identifier_token1] = ACTIONS(501),
    [sym__point_interpret_identifier] = ACTIONS(503),
    [sym_system_identifier] = ACTIONS(501),
    [sym_pointer_identifier] = ACTIONS(501),
    [sym_macro_identifier] = ACTIONS(503),
    [sym_number] = ACTIONS(501),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_CR] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_cmd_identifier] = ACTIONS(501),
    [sym__help_command] = ACTIONS(501),
    [sym__question_mark_identifier] = ACTIONS(501),
    [sym__env_identifier] = ACTIONS(501),
  },
  [120] = {
    [aux_sym__commands_singleline_repeat1] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(508),
    [sym_interpreter_command] = ACTIONS(510),
    [anon_sym_LPAREN_STAR] = ACTIONS(508),
    [anon_sym_DOT_DASH] = ACTIONS(510),
    [anon_sym_DOT_BANG] = ACTIONS(508),
    [anon_sym_DOT_LPAREN] = ACTIONS(508),
    [anon_sym_DOT_SLASH] = ACTIONS(508),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(510),
    [aux_sym_interpret_identifier_token1] = ACTIONS(508),
    [sym__point_interpret_identifier] = ACTIONS(510),
    [sym_system_identifier] = ACTIONS(508),
    [sym_pointer_identifier] = ACTIONS(508),
    [sym_macro_identifier] = ACTIONS(510),
    [sym_number] = ACTIONS(508),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_cmd_identifier] = ACTIONS(508),
    [sym__help_command] = ACTIONS(508),
    [sym__question_mark_identifier] = ACTIONS(508),
    [sym__env_identifier] = ACTIONS(508),
  },
  [121] = {
    [sym_arg] = STATE(121),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [aux_sym_iter_offsets_command_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(518),
    [aux_sym_arg_identifier_token2] = ACTIONS(518),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(524),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(110),
    [anon_sym_CR] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
  },
  [122] = {
    [sym_arg] = STATE(121),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [aux_sym_iter_offsets_command_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(542),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(534),
    [anon_sym_CR] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(534),
  },
  [123] = {
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [anon_sym_DOT_DASH] = ACTIONS(103),
    [anon_sym_DOT_BANG] = ACTIONS(101),
    [anon_sym_DOT_LPAREN] = ACTIONS(101),
    [anon_sym_DOT_SLASH] = ACTIONS(101),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(103),
    [aux_sym_interpret_identifier_token1] = ACTIONS(101),
    [sym__point_interpret_identifier] = ACTIONS(103),
    [sym_system_identifier] = ACTIONS(101),
    [sym_pointer_identifier] = ACTIONS(101),
    [sym_macro_identifier] = ACTIONS(103),
    [sym_number] = ACTIONS(101),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
  },
  [124] = {
    [sym_arg] = STATE(122),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [aux_sym_iter_offsets_command_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(542),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(546),
    [anon_sym_CR] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(546),
  },
  [125] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(27),
    [aux_sym__interpret_command_repeat1] = STATE(130),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(548),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [126] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(35),
    [aux_sym__interpret_command_repeat1] = STATE(128),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(550),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [127] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [aux_sym_iter_offsets_command_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(546),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(546),
  },
  [128] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(31),
    [aux_sym__interpret_command_repeat1] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(552),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [129] = {
    [sym_arg] = STATE(121),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [aux_sym_iter_offsets_command_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(534),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(534),
  },
  [130] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [aux_sym__interpret_command_repeat1] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(552),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [132] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [134] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [135] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [136] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(37),
    [sym_quoted_arg] = STATE(37),
    [sym_cmd_substitution_arg] = STATE(37),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(556),
    [aux_sym_arg_identifier_token2] = ACTIONS(556),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(556),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(558),
    [anon_sym_CR] = ACTIONS(558),
    [anon_sym_SEMI] = ACTIONS(558),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [141] = {
    [sym_arg] = STATE(176),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [142] = {
    [sym_arg] = STATE(162),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(542),
    [sym__comment] = ACTIONS(5),
  },
  [143] = {
    [sym_arg] = STATE(98),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [144] = {
    [sym_arg] = STATE(49),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [145] = {
    [sym_arg] = STATE(97),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [146] = {
    [sym_arg] = STATE(93),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [147] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [148] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [149] = {
    [sym_arg] = STATE(161),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(542),
    [sym__comment] = ACTIONS(5),
  },
  [150] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [151] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [152] = {
    [sym_arg] = STATE(87),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [153] = {
    [sym_arg] = STATE(86),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [154] = {
    [sym_arg] = STATE(83),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [155] = {
    [sym_arg] = STATE(81),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [156] = {
    [sym_arg] = STATE(77),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [157] = {
    [sym_arg] = STATE(76),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [158] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [159] = {
    [sym_arg] = STATE(74),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [160] = {
    [sym_arg] = STATE(69),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [161] = {
    [sym_arg] = STATE(63),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [162] = {
    [sym_arg] = STATE(148),
    [sym_arg_identifier] = STATE(131),
    [sym_quoted_arg] = STATE(131),
    [sym_cmd_substitution_arg] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(536),
    [aux_sym_arg_identifier_token2] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(542),
    [sym__comment] = ACTIONS(5),
  },
  [163] = {
    [sym_arg] = STATE(174),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [164] = {
    [sym_arg] = STATE(59),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [165] = {
    [sym_arg] = STATE(172),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [166] = {
    [sym_arg] = STATE(173),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [167] = {
    [sym_arg] = STATE(171),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [sym__comment] = ACTIONS(5),
  },
  [168] = {
    [anon_sym_DQUOTE] = ACTIONS(556),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(556),
    [aux_sym_arg_identifier_token2] = ACTIONS(556),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(558),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(558),
  },
  [169] = {
    [aux_sym__interpret_command_repeat1] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [anon_sym_] = ACTIONS(572),
    [aux_sym_arg_identifier_token1] = ACTIONS(570),
    [aux_sym_arg_identifier_token2] = ACTIONS(570),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(570),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [170] = {
    [anon_sym_DQUOTE] = ACTIONS(556),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(556),
    [aux_sym_arg_identifier_token2] = ACTIONS(556),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(556),
    [sym__comment] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(575),
    [anon_sym_CR] = ACTIONS(575),
    [anon_sym_SEMI] = ACTIONS(575),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_CR] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_CR] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(579),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(581),
    [anon_sym_CR] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(581),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_CR] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(583),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_CR] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
  },
  [177] = {
    [aux_sym_commands_repeat2] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_CR] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
  },
  [178] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_CR] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
  },
  [179] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(591),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_CR] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
  },
  [180] = {
    [aux_sym_commands_repeat2] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_CR] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
  },
  [181] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(593),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_CR] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(593),
    [anon_sym_CR] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(593),
  },
  [183] = {
    [aux_sym__commands_singleline_repeat2] = STATE(184),
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(600),
  },
  [184] = {
    [aux_sym__commands_singleline_repeat2] = STATE(184),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(604),
  },
  [185] = {
    [aux_sym__commands_singleline_repeat2] = STATE(184),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(600),
  },
  [186] = {
    [aux_sym__commands_singleline_repeat2] = STATE(188),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(611),
  },
  [187] = {
    [aux_sym__commands_singleline_repeat2] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(600),
  },
  [188] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(611),
  },
  [189] = {
    [aux_sym__commands_singleline_repeat2] = STATE(191),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(611),
  },
  [190] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(602),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(613),
  },
  [191] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(611),
  },
  [192] = {
    [aux_sym__commands_singleline_repeat2] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(600),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(602),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(602),
  },
  [194] = {
    [sym__eq_sep_args] = STATE(55),
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_key] = ACTIONS(237),
    [sym__comment] = ACTIONS(5),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(618),
    [sym__comment] = ACTIONS(5),
  },
  [196] = {
    [sym_interpret_arg] = STATE(94),
    [anon_sym_] = ACTIONS(5),
    [sym__any_command] = ACTIONS(620),
    [sym__comment] = ACTIONS(5),
  },
  [197] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(622),
    [sym__comment] = ACTIONS(5),
  },
  [198] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(628),
    [sym__comment] = ACTIONS(5),
  },
  [201] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(630),
    [sym__comment] = ACTIONS(5),
  },
  [202] = {
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_val] = ACTIONS(632),
    [sym__comment] = ACTIONS(5),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(636),
    [sym__comment] = ACTIONS(5),
  },
  [205] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(638),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [sym__comment] = ACTIONS(3),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(648),
    [sym__comment] = ACTIONS(5),
  },
  [213] = {
    [anon_sym_DQUOTE] = ACTIONS(650),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_DQUOTE] = ACTIONS(652),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(658),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [219] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(660),
    [sym__comment] = ACTIONS(5),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(664),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [222] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(666),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [223] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(668),
    [sym__comment] = ACTIONS(5),
  },
  [224] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(670),
    [sym__comment] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_RPAREN] = ACTIONS(672),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(221),
  [11] = {.count = 1, .reusable = false}, SHIFT(177),
  [13] = {.count = 1, .reusable = true}, SHIFT(57),
  [15] = {.count = 1, .reusable = false}, SHIFT(82),
  [17] = {.count = 1, .reusable = true}, SHIFT(196),
  [19] = {.count = 1, .reusable = true}, SHIFT(197),
  [21] = {.count = 1, .reusable = true}, SHIFT(125),
  [23] = {.count = 1, .reusable = true}, SHIFT(56),
  [25] = {.count = 1, .reusable = false}, SHIFT(50),
  [27] = {.count = 1, .reusable = true}, SHIFT(123),
  [29] = {.count = 1, .reusable = false}, SHIFT(23),
  [31] = {.count = 1, .reusable = true}, SHIFT(100),
  [33] = {.count = 1, .reusable = true}, SHIFT(194),
  [35] = {.count = 1, .reusable = false}, SHIFT(204),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(2),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, SHIFT(124),
  [45] = {.count = 1, .reusable = true}, SHIFT(139),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(180),
  [51] = {.count = 1, .reusable = true}, SHIFT(119),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(182),
  [57] = {.count = 1, .reusable = false}, SHIFT(192),
  [59] = {.count = 1, .reusable = true}, SHIFT(109),
  [61] = {.count = 1, .reusable = true}, SHIFT(108),
  [63] = {.count = 1, .reusable = true}, SHIFT(14),
  [65] = {.count = 1, .reusable = true}, SHIFT(11),
  [67] = {.count = 1, .reusable = false}, SHIFT(186),
  [69] = {.count = 1, .reusable = true}, SHIFT(126),
  [71] = {.count = 1, .reusable = true}, SHIFT(112),
  [73] = {.count = 1, .reusable = true}, SHIFT(111),
  [75] = {.count = 1, .reusable = true}, SHIFT(20),
  [77] = {.count = 1, .reusable = true}, SHIFT(13),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 1, .reusable = true}, SHIFT(127),
  [83] = {.count = 1, .reusable = true}, SHIFT(168),
  [85] = {.count = 1, .reusable = false}, SHIFT(193),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(187),
  [91] = {.count = 1, .reusable = true}, SHIFT(120),
  [93] = {.count = 1, .reusable = false}, SHIFT(189),
  [95] = {.count = 1, .reusable = true}, SHIFT(170),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_identifier, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_identifier, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(205),
  [110] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(41),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(200),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(4),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(9),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [126] = {.count = 1, .reusable = false}, SHIFT(205),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [130] = {.count = 1, .reusable = false}, SHIFT(41),
  [132] = {.count = 1, .reusable = false}, SHIFT(200),
  [134] = {.count = 1, .reusable = false}, SHIFT(4),
  [136] = {.count = 1, .reusable = false}, SHIFT(9),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [178] = {.count = 1, .reusable = true}, SHIFT(201),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(201),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(202),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(164),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [207] = {.count = 1, .reusable = true}, SHIFT(195),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [237] = {.count = 1, .reusable = false}, SHIFT(45),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [255] = {.count = 1, .reusable = false}, SHIFT(101),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [389] = {.count = 1, .reusable = false}, SHIFT(53),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [407] = {.count = 1, .reusable = true}, SHIFT(61),
  [409] = {.count = 1, .reusable = true}, SHIFT(62),
  [411] = {.count = 1, .reusable = false}, SHIFT(143),
  [413] = {.count = 1, .reusable = false}, SHIFT(64),
  [415] = {.count = 1, .reusable = true}, SHIFT(64),
  [417] = {.count = 1, .reusable = true}, SHIFT(65),
  [419] = {.count = 1, .reusable = true}, SHIFT(66),
  [421] = {.count = 1, .reusable = true}, SHIFT(144),
  [423] = {.count = 1, .reusable = true}, SHIFT(135),
  [425] = {.count = 1, .reusable = true}, SHIFT(145),
  [427] = {.count = 1, .reusable = true}, SHIFT(70),
  [429] = {.count = 1, .reusable = true}, SHIFT(71),
  [431] = {.count = 1, .reusable = false}, SHIFT(72),
  [433] = {.count = 1, .reusable = true}, SHIFT(73),
  [435] = {.count = 1, .reusable = true}, SHIFT(47),
  [437] = {.count = 1, .reusable = true}, SHIFT(142),
  [439] = {.count = 1, .reusable = true}, SHIFT(18),
  [441] = {.count = 1, .reusable = false}, SHIFT(146),
  [443] = {.count = 1, .reusable = true}, SHIFT(147),
  [445] = {.count = 1, .reusable = true}, SHIFT(149),
  [447] = {.count = 1, .reusable = true}, SHIFT(150),
  [449] = {.count = 1, .reusable = true}, SHIFT(151),
  [451] = {.count = 1, .reusable = true}, SHIFT(152),
  [453] = {.count = 1, .reusable = true}, SHIFT(212),
  [455] = {.count = 1, .reusable = true}, SHIFT(153),
  [457] = {.count = 1, .reusable = true}, SHIFT(154),
  [459] = {.count = 1, .reusable = true}, SHIFT(155),
  [461] = {.count = 1, .reusable = true}, SHIFT(156),
  [463] = {.count = 1, .reusable = true}, SHIFT(157),
  [465] = {.count = 1, .reusable = true}, SHIFT(158),
  [467] = {.count = 1, .reusable = true}, SHIFT(159),
  [469] = {.count = 1, .reusable = true}, SHIFT(160),
  [471] = {.count = 1, .reusable = true}, SHIFT(90),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [475] = {.count = 1, .reusable = false}, SHIFT(60),
  [477] = {.count = 1, .reusable = false}, SHIFT(163),
  [479] = {.count = 1, .reusable = false}, SHIFT(165),
  [481] = {.count = 1, .reusable = true}, SHIFT(166),
  [483] = {.count = 1, .reusable = true}, SHIFT(141),
  [485] = {.count = 1, .reusable = true}, SHIFT(167),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [491] = {.count = 1, .reusable = false}, SHIFT(110),
  [493] = {.count = 1, .reusable = true}, SHIFT(15),
  [495] = {.count = 1, .reusable = false}, SHIFT(107),
  [497] = {.count = 1, .reusable = true}, SHIFT(136),
  [499] = {.count = 1, .reusable = true}, SHIFT(22),
  [501] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [503] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(119),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [510] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(120),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(218),
  [518] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(133),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(219),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(8),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(7),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [532] = {.count = 1, .reusable = false}, SHIFT(218),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [536] = {.count = 1, .reusable = false}, SHIFT(133),
  [538] = {.count = 1, .reusable = false}, SHIFT(219),
  [540] = {.count = 1, .reusable = false}, SHIFT(8),
  [542] = {.count = 1, .reusable = false}, SHIFT(7),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [548] = {.count = 1, .reusable = false}, SHIFT(130),
  [550] = {.count = 1, .reusable = false}, SHIFT(128),
  [552] = {.count = 1, .reusable = false}, SHIFT(169),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym_question_mark_identifier, 1),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1),
  [560] = {.count = 1, .reusable = false}, SHIFT(222),
  [562] = {.count = 1, .reusable = false}, SHIFT(85),
  [564] = {.count = 1, .reusable = false}, SHIFT(223),
  [566] = {.count = 1, .reusable = false}, SHIFT(6),
  [568] = {.count = 1, .reusable = false}, SHIFT(5),
  [570] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2),
  [572] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2), SHIFT_REPEAT(169),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 5),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [587] = {.count = 1, .reusable = true}, SHIFT(3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [600] = {.count = 1, .reusable = true}, SHIFT(10),
  [602] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(10),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [611] = {.count = 1, .reusable = true}, SHIFT(12),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(12),
  [616] = {.count = 1, .reusable = false}, SHIFT(67),
  [618] = {.count = 1, .reusable = false}, SHIFT(203),
  [620] = {.count = 1, .reusable = false}, SHIFT(52),
  [622] = {.count = 1, .reusable = false}, SHIFT(206),
  [624] = {.count = 1, .reusable = true}, SHIFT(40),
  [626] = {.count = 1, .reusable = true}, SHIFT(39),
  [628] = {.count = 1, .reusable = false}, SHIFT(198),
  [630] = {.count = 1, .reusable = false}, SHIFT(46),
  [632] = {.count = 1, .reusable = false}, SHIFT(58),
  [634] = {.count = 1, .reusable = true}, SHIFT(91),
  [636] = {.count = 1, .reusable = false}, SHIFT(225),
  [638] = {.count = 1, .reusable = false}, SHIFT(210),
  [640] = {.count = 1, .reusable = true}, SHIFT(103),
  [642] = {.count = 1, .reusable = true}, SHIFT(140),
  [644] = {.count = 1, .reusable = true}, SHIFT(138),
  [646] = {.count = 1, .reusable = true}, SHIFT(137),
  [648] = {.count = 1, .reusable = false}, SHIFT(42),
  [650] = {.count = 1, .reusable = true}, SHIFT(175),
  [652] = {.count = 1, .reusable = true}, SHIFT(80),
  [654] = {.count = 1, .reusable = true}, SHIFT(79),
  [656] = {.count = 1, .reusable = true}, SHIFT(78),
  [658] = {.count = 1, .reusable = false}, SHIFT(207),
  [660] = {.count = 1, .reusable = false}, SHIFT(208),
  [662] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [664] = {.count = 1, .reusable = false}, SHIFT(213),
  [666] = {.count = 1, .reusable = false}, SHIFT(214),
  [668] = {.count = 1, .reusable = false}, SHIFT(215),
  [670] = {.count = 1, .reusable = true}, SHIFT(38),
  [672] = {.count = 1, .reusable = true}, SHIFT(48),
};

void *tree_sitter_r2cmd_external_scanner_create(void);
void tree_sitter_r2cmd_external_scanner_destroy(void *);
bool tree_sitter_r2cmd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_r2cmd_external_scanner_serialize(void *, char *);
void tree_sitter_r2cmd_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_r2cmd(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_r2cmd_external_scanner_create,
      tree_sitter_r2cmd_external_scanner_destroy,
      tree_sitter_r2cmd_external_scanner_scan,
      tree_sitter_r2cmd_external_scanner_serialize,
      tree_sitter_r2cmd_external_scanner_deserialize,
    },
  };
  return &language;
}
