#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 247096088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned int p_7[4][3], long p_9[5],
                       short p_11, long long p_19[5])
{
  long v_21;
  float v_17;
  long long v_15;
  unsigned int v_13;
  signed char v_4;
  char v;
  unsigned long long result;
  v_21 = -50429L;
  v_15 = 744540354LL;
  v_13 = (unsigned int)p_9[2];
  v_17 = (float)((p_19[3] % 39003LL) / (long long)(((unsigned long)v_21 - (unsigned long)(
                                                    4294967248U | p_7[2][0])) + 494UL) + 
                 (long long)(- (- p)) / ((p_19[4] + (long long)(~ v_13)) + 494LL));
  v = (char)(-8587316224.f / ((float)((long long)((int)((short)v_17) & -19852) * (
                                      -56443440988160LL - - v_15)) + 874.f));
  v_4 = (signed char)((long long)((unsigned long)((long)v | (p_9[4] & (long)p_11)) % (unsigned long)(
                                  ! p_7[0][2] % ((9707U + v_13) + 18U) + 219U)) ^ - (
                      (long long)((int)v % 40383) ^ 27839LL / (v_15 + 759LL)));
  result = (unsigned long long)(~ ((unsigned int)((int)(! v) % (((int)v_4 - 16) + 298)) % (
                                   - ((unsigned int)p * p_7[1][2]) + 771U)));
  return result;
}


