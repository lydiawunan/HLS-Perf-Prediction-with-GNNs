#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 617879098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_4, long p_6, char p_11, char p_17)
{
  unsigned long long v_19;
  short v_15;
  int v_13;
  double v_9;
  unsigned long long v;
  unsigned long result;
  v_19 = (unsigned long long)p_17;
  v_15 = (short)-9775;
  v_13 = -838380692;
  v = (unsigned long long)p_4;
  if ((v / (unsigned long long)((int)v_15 + 403) + 630082513ULL) * ~ (~ v_19) >= v_19) {
    result = (unsigned long)(! (! v_13) % ((2 + (int)v_15) / ((int)p_11 + 23) + 85));
    v_9 = (double)((((unsigned long)p_11 ^ result) - (unsigned long)(
                    74 + (int)((signed char)-2.2822981354e+38))) * result);
    v = (unsigned long long)(~ p_6);
  }
  else {
    v = 10439ULL;
    v_9 = (double)(~ ((unsigned long)p_17 - (unsigned long)p_4 * 4294918102UL));
  }
  if ((unsigned long long)(- p_6 % -47150L) % (v + 336ULL) > (unsigned long long)(! (
      (int)((unsigned short)(- v_9)) - 11828))) result = (unsigned long)(! p);
  else result = (unsigned long)((long long)p_4 % 812LL);
  return result;
}


