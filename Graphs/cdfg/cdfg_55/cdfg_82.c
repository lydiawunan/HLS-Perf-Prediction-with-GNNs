#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 144139157
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, long p_5, long long p_9)
{
  float v_15;
  signed char v_13;
  float v_11;
  unsigned int v_7;
  signed char v;
  signed char result;
  v_15 = (float)p_9;
  v_13 = (signed char)p;
  v_11 = 576.310668945f;
  v_7 = (unsigned int)p_9;
  v = (signed char)55;
  while ((long long)p != ((long long)(~ p_5) / (((long long)v_7 - p_9) + 314LL)) % (long long)(
                         - (v_7 - (unsigned int)v_11) + 939U)) {
    result = (int)v_15 / (((int)v_13 - 155) + 755);
    v = (signed char)((unsigned long)v_7 - (unsigned long)(p_5 * (long)result + (
                                                           (long)v_11 - -517383324L)));
    v_13 = (signed char)55;
    v_11 = (float)p;
  }
  while_0_break: ;
  result = v;
  return result;
}


