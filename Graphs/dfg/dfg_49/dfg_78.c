#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 314506043
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, char p_9, unsigned long long p_11,
          unsigned long long p_15, char p_19)
{
  signed char v_21;
  unsigned int v_17;
  unsigned long long v_13;
  unsigned int v_7;
  unsigned char v_5;
  int v;
  float result;
  v_17 = 4294944671U;
  v_13 = 119554465ULL;
  v_7 = 93647889U;
  v = -58654;
  v_21 = (signed char)(729768228ULL % (p + 144ULL));
  v_7 = - (~ v_17 / (unsigned int)((int)p_19 / ((int)p_9 + 273) + 351)) * (
        4294960251U % (unsigned int)((int)v_21 + 465) - ~ (v_17 / (v_7 + 931U)));
  v_5 = (unsigned char)(~ (- (v_13 ^ p)) / (p_15 * 45605ULL + 546ULL));
  result = (float)(((p | (unsigned long long)v) * (unsigned long long)(
                    -37747LL & (long long)v_5) & (unsigned long long)(
                                                 v_7 / ((unsigned int)2.57444868488e+38f + 445U)) * (
                                                 (unsigned long long)p_9 + p)) - (unsigned long long)((int)((unsigned char)(- (
                   (double)p_11 + -2.09852372505e+38)))));
  return result;
}


