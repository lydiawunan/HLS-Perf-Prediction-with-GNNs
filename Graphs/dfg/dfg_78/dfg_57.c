#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 298601006
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, double p_7)
{
  long v_17;
  long v_15;
  double v_13;
  unsigned long v_11;
  unsigned char v_9;
  unsigned char v_5;
  double v;
  short result;
  v_17 = 927725463L;
  v_15 = 12982L;
  v_11 = 48415UL;
  v_9 = (unsigned char)p_7;
  v_13 = (double)(v_15 + v_17);
  v_5 = (unsigned char)(-863424438. / (v_13 + 46.));
  v = (double)((unsigned long)((int)v_5 / (((int)((short)-2.80283093634e+37) - 17181) + 461) << (
                               ((int)((char)(p_7 / ((double)v_9 + 653.))) + 105) & 31)) % (
               v_11 + 890UL));
  result = (short)((25251ULL ^ (unsigned long long)(v / -2417934040.89)) * (unsigned long long)p - 18446744073232630709ULL);
  return result;
}


