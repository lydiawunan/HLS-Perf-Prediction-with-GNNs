#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1018323660
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(void)
{
  float v_10;
  unsigned short v_8;
  char v_6;
  unsigned int v_4;
  long long v;
  long result;
  v_10 = 919.524230957f;
  v_8 = (unsigned short)4367;
  v_4 = 4294966372U;
  v = 60665LL;
  v_8 = (unsigned short)(~ (3525704282U & (unsigned int)v_8));
  v_6 = (char)(((unsigned long)-111.835243225f * (0UL ^ (unsigned long)(
                                                  (unsigned int)v_8 - 4294950941U))) % (unsigned long)(
               ((unsigned int)(-71 + ((int)((short)v_10) - 16471)) - (
                0 - 43271U)) + 430U));
  v = 2633LL / (! ((v ^ (long long)v_6) - 123LL) + 744LL);
  result = (long)(! (! (~ v) % (long long)(v_4 + 513U)));
  return result;
}


