#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837181047
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, float p_4, char p_6, unsigned long p_9, float p_11)
{
  unsigned short v_31;
  unsigned char v_29;
  char v_27;
  long long v_25;
  long v_23;
  long v_21;
  long v_19;
  int v_17;
  long v_15;
  int v_13;
  unsigned char v;
  unsigned int result;
  v_31 = (unsigned short)p_4;
  v_29 = (unsigned char)165;
  v_27 = (char)77;
  v_25 = (long long)p;
  v_23 = (long)p_6;
  v_19 = (long)p;
  v_17 = (int)p_4;
  v_15 = 405834468L;
  v = (unsigned char)150;
  if (v_25 > (long long)((int)((unsigned char)(- p_11 + (float)(v_23 * v_19))) >> (
                         (int)v & 7))) {
    v_21 = 64L;
    v_21 = ~ ((long)p_4 + (v_23 + v_21));
    v_13 = (int)(~ ((long long)v_17 / (v_25 + 593LL)) + (long long)((int)(
                                                                    p_11 - 49365.f) - 
                                                                    (int)v_27 / (
                                                                    (int)v_29 + 938)));
  }
  else {
    v_21 = (long)5210763505.33 % ((v_23 ^ (long)p) * (long)(! v_31) + 900L);
    v_13 = (int)v % 683;
    v_19 = (long)(~ (short)-11622);
  }
  if ((long)p_6 <= v_19 * (long)(39 * (int)((char)(- p_11)))) {
    result = (unsigned int)(-48304LL * (long long)(! ((long)v_13 / (v_15 + 816L))));
    v = (unsigned char)((long long)(p_9 | (unsigned long)(- p_11)) * -744769189LL);
    result = (unsigned int)((int)((float)(result - (unsigned int)p) / (
                                  - p_4 + 884.f)) / (((15001 + (int)p_6) - (
                                                      -3 - (int)v)) + 715));
  }
  else {
    v_21 = (long)((unsigned long)(-51698237L ^ ((long)p_6 | v_21)) + (
                  (unsigned long)(v_19 % -39909L) + ~ p_9));
    v_23 = (long)v_13;
    result = (unsigned int)((p_4 * (float)v_17 + (p_11 + (float)v_19)) * (float)(
                            (v_21 ^ v_23) - 1285251840L));
  }
  return result;
}


