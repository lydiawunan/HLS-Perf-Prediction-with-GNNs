#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552538623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, unsigned long long p_7[2], double p_15,
         unsigned char p_19, long long p_23[2][2])
{
  float v_29;
  long v_27;
  signed char v_25;
  long v_21;
  char v_17;
  double v_13;
  char v_11;
  unsigned short v_9;
  unsigned int v_4;
  double v;
  char result;
  v_29 = 243.170791626f;
  v_27 = -959178817L;
  v_25 = (signed char)59;
  v_17 = (char)p_19;
  v_13 = -408.623042476;
  v_11 = (char)-91;
  v_4 = (unsigned int)p;
  v = 6978330501.58;
  if ((unsigned long long)p >= (unsigned long long)v_27 % (((unsigned long long)p_19 / (
                                                            p_7[0] + 590ULL) - (unsigned long long)v) + 612ULL)) {
    v_9 = (unsigned short)p_19;
    v_11 = (char)(p_15 + (double)((int)(~ v_17) * (int)((char)p_15)));
    v_4 = (unsigned int)p;
  }
  else {
    v_27 = (long)v_29;
    v_21 = (long)(((long long)p + ! p_23[0][0]) + (long long)((long)(
                                                              (int)v_25 / (
                                                              (int)((signed char)-6586653840.14) + 956)) + 
                                                              v_27 / (
                                                              (long)4752849056.47 + 415L)));
    v_9 = (unsigned short)((unsigned long long)v_21 * (((unsigned long long)p_19 * p_7[0]) / (unsigned long long)(
                                                       p_23[1][1] * 45024LL + 721LL)));
  }
  if (45147ULL > (unsigned long long)(((int)v_9 - 530124852) % ((int)v_11 + 844)) - - (
                 (unsigned long long)v_13 + p_7[1])) {
    result = (char)(- -1.84467440737e+19f);
    v = (double)((int)result % ((int)p + 257));
    result = (char)(- (- v - (double)(- v_4)));
  }
  else result = (char)p_7[0];
  return result;
}


