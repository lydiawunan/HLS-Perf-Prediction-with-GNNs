#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 561427833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_5, double p_9,
                       unsigned long long p_11, long long p_25)
{
  float v_23;
  unsigned long v_21;
  unsigned long v_19;
  long long v_17;
  float v_15;
  long v_13;
  long v_7;
  float v;
  unsigned long long result;
  v_21 = (unsigned long)p;
  v_19 = (unsigned long)p_9;
  v_17 = (long long)p;
  v_15 = (float)p;
  v_13 = (long)p_25;
  v = 482.475463867f;
  result = (unsigned long long)p_5;
  if (- (- ((double)p / (p_9 + 192.))) != (double)((long long)v_13 ^ (
                                                   (p_5 & (long long)p_9) + (long long)v_21))) {
    v_23 = (float)1;
    v = (float)((long long)((v_21 | (unsigned long)v_23) % (v_19 / 4294913385UL + 721UL)) - 
                p_5 % 655LL);
    v_13 = (long)(~ ((unsigned long long)(v_19 - 4294967195UL) % (result % (unsigned long long)(
                                                                  v_19 + 858UL) + 325ULL)));
  }
  else {
    result = (unsigned long long)p_25;
    v_15 = (float)(unsigned char)255;
    v_17 = 40002LL;
  }
  if ((long long)((float)v_13 + v) < ~ ((long long)(9178U / ((unsigned int)v_15 + 940U)) + - v_17)) {
    v_7 = (long)v;
    v = (float)((unsigned long long)p + ((unsigned long long)p_5 / (result + 80ULL) - (unsigned long long)(! v_7)));
    result = (unsigned long long)(((int)p / ((int)((unsigned char)-3.30000341349e+38f) + 234) - (int)(- v)) + ~ (
                                  (int)p + (int)p));
  }
  else result = (unsigned long long)p_9;
  return result;
}


