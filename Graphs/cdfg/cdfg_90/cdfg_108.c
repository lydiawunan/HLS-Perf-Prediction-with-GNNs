#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810904796
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, float p_5, unsigned short p_7,
              unsigned short p_11, unsigned short p_19)
{
  int v_21;
  char v_17;
  unsigned long v_15;
  unsigned char v_13;
  unsigned char v_9;
  unsigned char v;
  long long result;
  v_21 = (int)p_11;
  v_17 = (char)45;
  v_15 = 62031UL;
  v_13 = (unsigned char)62;
  v_9 = (unsigned char)111;
  v = (unsigned char)10;
  result = (long long)p_11;
  while ((float)v != (101.f * p_5 + (float)(54068 + (int)p_7)) / ((float)(
                                                                  ((int)v_9 * (int)((unsigned char)p_5)) % (
                                                                  ((int)p_11 - (int)v_13) + 909)) + 364.f)) {
    v_15 = (unsigned long)v_17 * (v_15 % 14792UL);
    result = (long long)v_21;
    v_9 = (unsigned char)(((result & (long long)p_7) - (long long)((int)p_11 - (int)p_19)) ^ (long long)(
                          31872 % ((int)(- p_19) + 712)));
    v_13 = (unsigned char)((long long)(- (p_5 / (p_5 + 310.f))) % 31930LL);
  }
  while_0_break: ;
  result = ~ ((result + result) / (long long)((int)(~ p) + 742));
  return result;
}


