#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554128380
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_4, unsigned char p_6,
                 signed char p_11, short p_13)
{
  unsigned long long v_19;
  short v_17;
  long long v_15;
  char v_9;
  unsigned long v;
  unsigned int result;
  v_19 = (unsigned long long)p_6;
  v_17 = (short)p_6;
  v_15 = (long long)p_6;
  v_9 = (char)120;
  v = 114435201UL;
  while ((long long)(~ p_11) > ((long long)p_13 & (v_15 ^ (long long)p_13)) % (long long)(
                               ~ ((unsigned long)v_17 - v) + 408UL)) {
    v_17 = v_19 & 18446744073709525490ULL;
    v_9 = (char)(- (33273L + (long)(12 & (int)p_6)));
    result = (unsigned int)((-32392LL / ((long long)p_11 % (v_15 + 691LL) + 24LL)) / 91LL);
    v_15 = (long long)(- ((unsigned int)((int)p_6 ^ (int)p_11) + ~ result));
  }
  while_0_break: ;
  if (23574ULL > (unsigned long long)(4136813708U | (unsigned int)(- v_9))) 
    result = (unsigned int)((unsigned long long)(- (1.53047412035e+38f * (float)p)) + 
                            242862690ULL * (p_4 | (unsigned long long)p_6));
  else {
    v = (unsigned long)(~ (unsigned short)63586);
    result = (unsigned int)v;
  }
  return result;
}


