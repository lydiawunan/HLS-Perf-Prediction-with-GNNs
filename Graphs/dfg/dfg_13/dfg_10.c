#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713828767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, signed char p_4[1][4], int p_6, unsigned short p_9, int p_11)
{
  unsigned short v_17;
  unsigned char v_15;
  char v_13;
  long long v;
  int result;
  v_17 = (unsigned short)48980;
  v_15 = (unsigned char)p;
  v = (long long)p_6;
  result = (int)p_9;
  v_13 = (char)(0LL / ((! v / -115LL) / (long long)(p_11 + 326) + 650LL));
  v = (((long long)v_13 - 625584684LL) / (long long)((int)(- v_15) + 820) - (long long)((unsigned long)(
       121 * (int)((signed char)-1.37380675563e+38)))) % (long long)(
      (((int)v_17 - (int)p) % ((p_11 + p_6) + 461) - (p_11 + result)) + 114);
  result = (int)(- ((long)(- p_9) & -2128656640L % (long)((-113295850 | p_11) + 1)));
  result = (int)(! ((long long)((result % ((int)p + 44)) * (int)p_4[0][2]) / (
                    (long long)(- p_6) % (v * -8584LL + 738LL) + 227LL)));
  return result;
}


