#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690707795
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned int p_4, long p_6[4][3],
              unsigned char p_9, short p_15)
{
  short v_25;
  short v_23;
  long v_21;
  float v_19;
  char v_17;
  long v_13;
  short v_11;
  float v;
  long long result;
  v_25 = (short)17348;
  v_23 = (short)-22646;
  v_21 = p_6[3][0];
  v_19 = -9705333760.f;
  v = (float)p_15;
  if ((unsigned long)((long)((int)p_15 % ((int)((short)(24.f * v_19)) + 733)) / (
                      p_6[0][2] + 826L)) < (unsigned long)(((unsigned int)(~ p_9) | 
                                                            p_4 % (unsigned int)(
                                                            (int)p_9 + 924)) + (unsigned int)(~ (! p_15)))) {
    v_17 = (char)(((unsigned int)(v_19 * (float)v_21) | (unsigned int)p_9 % (
                                                        p_4 + 538U)) << (
                  (int)v_23 & 31));
    v_13 = (long)v_17;
    v_11 = p_15;
  }
  else {
    v_11 = (short)-12475;
    v = (float)5861;
    v_13 = (long)(47 * (int)v_25);
  }
  if ((long)(v - (float)p_9) == (long)((int)v_11 % -95) - v_13) result = 
                                                                ((p | (long long)p_4) % (long long)(
                                                                 p_6[1][2] + 675L)) % (long long)(
                                                                p_6[0][1] + 978L);
  else {
    result = (long long)7.30538124626e+37;
    result = ~ result;
  }
  return result;
}


