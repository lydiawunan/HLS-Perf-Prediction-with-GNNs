#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487130760
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned short p_7, unsigned int p_9, float p_13)
{
  long long v_11;
  unsigned short v_5;
  short v;
  char result;
  v_5 = p_7;
  v_11 = (long long)(-1784 - (int)((short)(- (253.f - 7.f / (p_13 + 955.f)))));
  v = (short)((long long)(~ ((unsigned long)(-588280714L + (long)v_5) / (unsigned long)(
                             ((unsigned int)p_7 - p_9) + 271U))) % (v_11 + 560LL));
  result = (char)(- ((22 - (int)(! p)) - (-60 - (int)((signed char)(-833.226535998 - (double)p)))));
  result = (char)((int)(~ v) - (int)result);
  return result;
}


