#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783485147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, int p_7, long p_9, long p_17)
{
  float v_21;
  short v_19;
  long v_15;
  signed char v_13;
  unsigned long long v_11;
  short v_4;
  unsigned char v;
  int result;
  v_21 = (float)p;
  v_19 = p;
  v_15 = p_17;
  v_13 = (signed char)-71;
  v_11 = (unsigned long long)p_9;
  v = (unsigned char)((float)(((v_11 + (unsigned long long)v_13) * (v_11 % (unsigned long long)(
                                                                    p_7 + 63))) / (unsigned long long)(
                              v_15 + 11L)) - ((float)(~ (p_17 * (long)v_19)) + (
                                              0.f - (419146208.f + v_21))));
  v_4 = (short)((unsigned long long)((-117 - (int)p / 63867) / (((int)p * (int)p - p_7) + 195)) | 
                (unsigned long long)p_9 * 18446744073709495947ULL);
  result = (int)(((904405557ULL + (unsigned long long)v) - (unsigned long long)(! v_4)) % (unsigned long long)(
                 (int)v + 919) + (unsigned long long)(! p));
  result = result;
  return result;
}


