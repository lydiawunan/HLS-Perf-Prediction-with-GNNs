#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887999176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, long long p_15)
{
  unsigned int v_13;
  unsigned char v_11;
  long long v_9;
  float v_7;
  unsigned short v_5;
  unsigned long v;
  unsigned long result;
  v_13 = (unsigned int)p_15;
  v_11 = (unsigned char)p_15;
  v_9 = -826295678LL;
  v_7 = -1.19086961184e+38f;
  v_5 = (unsigned short)p;
  v = (unsigned long)p;
  v_7 = (float)(! ((unsigned long)p % (v + 821UL)) % ((unsigned long)(
                                                      ((float)(! v_11) - (
                                                       v_7 - (float)v_13)) + (float)(
                                                      p_15 - (long long)v_13)) + 737UL));
  v = (unsigned long)((0.f - - (- v_7)) + (float)((long long)(~ p) ^ 
                                                  (v_9 - (long long)p) * 6646619136LL));
  v = (unsigned long)((long long)p + (long long)(- v) * (long long)((int)((unsigned short)-5516197888.f) & (int)v_5));
  result = v * 359UL;
  return result;
}


