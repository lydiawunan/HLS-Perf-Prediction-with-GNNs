#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239342287
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, short p_13, int p_17)
{
  int v_15;
  int v_10;
  char v_8;
  double v_6;
  int v_4;
  double v;
  unsigned short result;
  v_15 = p_17;
  v_10 = -1003687524;
  v_8 = (char)84;
  v_6 = -827.341729659;
  v_4 = (int)(((unsigned long long)(! ((int)v_8 % (v_10 + 910))) + p) - (unsigned long long)(
              - ((int)p_13 << (v_15 & 15)) / ((-7 - - p_17) + 842)));
  v = (double)(! (~ v_4 + ! v_4)) * (v_6 / 740.);
  result = (unsigned short)((unsigned long)(- v) % 288465469UL);
  result = result;
  return result;
}


