//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 629333797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long p_13[4][4][5])
{
  char v_15;
  long long v_11;
  unsigned long long v_9;
  unsigned int v_7;
  float v_5;
  unsigned long v;
  unsigned long long result;
  v_15 = (char)-58;
  v_11 = (long long)p_13[0][0][4];
  v_5 = (float)p_13[1][2][4];
  v = (unsigned long)p;
  v_7 = (unsigned int)((0ULL % (((18446744073547968967ULL & (unsigned long long)p_13[1][3][1]) - (unsigned long long)(
                                 (int)v_15 & (int)((char)-6.71619694288e+37f))) + 816ULL)) / (unsigned long long)(
                       (int)(- p) + 960));
  v_9 = (unsigned long long)p_13[1][0][1];
  result = (unsigned long long)(116.f + (((float)v + v_5) + -2.50346045409e+38f / (
                                                            (float)v_7 + 341.f)) / (
                                        (float)(((unsigned long long)v_7 - v_9) >> (
                                                (v_11 + (long long)p_13[3][0][0]) & 63LL)) + 550.f));
  result = ~ ((result * (unsigned long long)p) % 18446744072909235102ULL | 20634888ULL);
  return result;
}


