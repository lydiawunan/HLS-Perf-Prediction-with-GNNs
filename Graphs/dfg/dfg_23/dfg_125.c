#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 291752915
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, short p_7[5][2], long p_9, char p_11[2][2][2],
                 long p_13[2][4])
{
  unsigned char v_21;
  signed char v_19;
  long long v_17;
  short v_15;
  unsigned short v_4;
  unsigned int v;
  unsigned int result;
  v_21 = (unsigned char)161;
  v_19 = (signed char)p_9;
  v_17 = -11482LL;
  v_15 = (short)25084;
  result = 114837266U;
  v = (unsigned int)(((long long)((unsigned long)p_9 % (unsigned long)(
                                  result + 905U) | 114UL) - (long long)(
                                                            (int)v_15 - (int)p) / (
                                                            v_17 % 3274737236LL + 16LL)) - ! (
                     (long long)((int)v_19 + (int)v_21) / -1LL));
  v_4 = (unsigned short)(- ((unsigned long)(- v) + (unsigned long)p_9));
  v = (unsigned int)(~ ((18446744073520871953ULL & (unsigned long long)p_7[4][0]) / (unsigned long long)(
                        (int)p + 407)));
  result = (unsigned int)((((unsigned long long)v - 519285764ULL % (unsigned long long)(
                                                    (int)v_4 + 217)) - (unsigned long long)(
                           (unsigned int)p % (v + 397U) & (unsigned int)p_7[4][1])) + (unsigned long long)(
                          ((long long)(p_9 / (long)((int)p_11[0][1][1] + 760)) - 174LL) / (long long)(
                          p_13[0][3] + 619L)));
  return result;
}


