#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24823163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, char p_9, float p_15[5])
{
  unsigned char v_13;
  unsigned short v_11;
  long long v_7;
  unsigned char v_5;
  unsigned long v;
  unsigned short result;
  v_13 = (unsigned char)190;
  v_11 = (unsigned short)p_15[4];
  v_5 = (unsigned char)124;
  v = 47346UL;
  result = (unsigned short)56753;
  v_7 = (long long)((int)p_9 - ((int)p % ((int)v_13 + 740) - (int)((float)p_9 / (
                                                                   p_15[4] + 542.f))) % (
                               ((int)(- p_9) & (int)v_13) + 168));
  v_5 = (unsigned char)(((((long long)v_5 - v_7) - (long long)(! p)) | (
                         (long long)((int)p_9 - (int)v_11) ^ ! v_7)) + v_7);
  result = (unsigned short)(((unsigned long)(((int)p / ((int)result + 793)) / (
                                             (int)result + 258)) * 4294912854UL) / (unsigned long)(
                            (int)v_5 + 842));
  result = (unsigned short)(! (- ((unsigned long)result * v)));
  return result;
}


