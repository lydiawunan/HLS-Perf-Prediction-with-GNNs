#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 824849636
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_4, short p_11,
                  unsigned int p_15, unsigned int p_17)
{
  unsigned char v_25;
  unsigned int v_23;
  unsigned int v_21;
  char v_19;
  signed char v_13;
  int v_9;
  char v_7;
  float v;
  unsigned char result;
  v_25 = (unsigned char)2;
  v_23 = p_15;
  v_21 = 619024737U;
  v_19 = (char)p_15;
  v_13 = (signed char)1;
  v_9 = (int)p_11;
  v_7 = (char)17;
  result = p_4;
  while ((unsigned long long)((int)p + (int)result * (int)v_19) > (unsigned long long)(
                                                                  (unsigned int)v_19 & v_21) % (
                                                                  ~ (
                                                                  (unsigned long long)v_7 % 271446032ULL) + 91ULL)) {
    v_23 *= 33U;
    v_13 = (signed char)v_25;
    v_9 = (int)(18446744073709496412ULL * (unsigned long long)(- (- p)));
    result = (unsigned char)(332277773U / (unsigned int)(33431 % ((int)p + 757) + 109));
  }
  while_0_break: ;
  if ((unsigned long)((unsigned int)(~ ((int)v_13 - 62015)) % (! p_15 + 294U)) < 
      (unsigned long)(~ p_17 - (unsigned int)((int)v_7 << ((int)p_4 & 7))) % 66UL) 
    result = (unsigned char)p;
  else {
    v = (float)((int)v_7 & v_9 % ((int)p_11 + 38));
    result = (unsigned char)(- v / ((float)(- (! p)) + 347.f));
    result = (unsigned char)(! ((long)p_4 - -174203279L % (long)((int)result + 223)));
  }
  return result;
}


