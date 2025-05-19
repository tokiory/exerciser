project('c-book', 'c')

SRC_DIR = 'src/'
headers = include_directories('include')
src_files = files(
  'main.c',
  SRC_DIR + 'count_whitespace.c',
  SRC_DIR + 'eof_print.c',
  SRC_DIR + 'ftoc.c',
  SRC_DIR + 'header.c',
  SRC_DIR + 'hello_world.c',
  SRC_DIR + 'input_histogram.c',
  SRC_DIR + 'is_eof.c',
  SRC_DIR + 'printable_whitespace.c',
  SRC_DIR + 'replace_whitespace.c',
  SRC_DIR + 'reverse_ftoc.c',
  SRC_DIR + 'word_count.c',
  SRC_DIR + 'word_space_print.c',
  SRC_DIR + 'character_amount.c',
  SRC_DIR + 'longest_line.c',
  SRC_DIR + 'reverse_line.c',
  SRC_DIR + 'print_long_line.c',
  SRC_DIR + 'remove_line_blank.c',
  SRC_DIR + 'detab.c',
  SRC_DIR + 'entab.c',
)

executable('main', src_files, include_directories: headers)
