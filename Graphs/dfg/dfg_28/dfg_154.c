#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 436262630
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, long p_11, unsigned char p_13)
{
  unsigned int v_9;
  double v_7;
  unsigned long long v_5;
  unsigned char v;
  unsigned short result;
  v_9 = 3732159149U;
  v_7 = (double)p;
  result = (unsigned short)851;
  v_5 = (unsigned long long)p_13;
  v_5 = ~ (((v_5 - (unsigned long long)v_9) + (unsigned long long)(v_9 * (unsigned int)p)) - (unsigned long long)p_11);
  v = (unsigned char)(- (- (48571. - (double)result * v_7)));
  result = (unsigned short)(((unsigned long long)((int)p / ((30934 + (int)v) + 781)) / (
                             v_5 + 332ULL)) / 783831977ULL);
  return result;
}


