/* Zig language support routines for GDB, the GNU debugger.

   Copyright (C) 2016 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include "defs.h"
#include "c-lang.h"
#include "varobj.h"
#include "cp-support.h"

extern initialize_file_ftype _initialize_zig_language;

static const char *zig_extensions[] =
{
  ".zig", NULL
};

extern const struct language_defn zig_language_defn =
{
  "zig",                          /* Language name */
  "Zig",
  language_zig,
  range_check_off,
  case_sensitive_on,
  array_row_major,
  macro_expansion_no,
  zig_extensions,
  &exp_descriptor_c,
  c_parse,
  null_post_parser,
  c_printchar,                  /* Print a character constant */
  c_printstr,                   /* Function to print string constant */
  c_emit_char,                  /* Print a single char */
  c_print_type,                 /* Print a type using appropriate syntax */
  c_print_typedef,              /* Print a typedef using appropriate syntax */
  c_val_print,                  /* Print a value using appropriate syntax */
  c_value_print,                /* Print a top-level value */
  default_read_var_value,       /* la_read_var_value */
  NULL,                         /* Language specific skip_trampoline */
  NULL,                         /* name_of_this */
  true,                         /* la_store_sym_names_in_linkage_form_p */
  basic_lookup_symbol_nonlocal, /* lookup_symbol_nonlocal */
  basic_lookup_transparent_type,/* lookup_transparent_type */
  NULL,                 /* Language specific symbol demangler */
  NULL,
  NULL,                         /* Language specific
                                   class_name_from_physname */
  c_op_print_tab,               /* expression operators for printing */
  1,                            /* c-style arrays */
  0,                            /* String lower bound */
  default_word_break_characters,
  default_collect_symbol_completion_matches,
  c_language_arch_info,
  default_print_array_index,
  default_pass_by_reference,
  c_get_string,
  c_watch_location_expression,
  NULL,                         /* la_get_symbol_name_matcher */
  iterate_over_symbols,
  default_search_name_hash,
  &default_varobj_ops,
  NULL,
  NULL,
  LANG_MAGIC
};

void _initialize_zig_language (void)
{
}

