#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 589470899
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned char p_4, int p_6, short p_11[5],
                  unsigned char p_13)
{
  unsigned short v_19;
  unsigned int v_17;
  unsigned long v_15;
  short v_9;
  unsigned long long v;
  unsigned long result;
  v_19 = (unsigned short)27524;
  v_17 = (unsigned int)p_11[1];
  v_9 = (short)-11901;
  v = 51665ULL;
  v_15 = (unsigned long)(4294944547U * (v_17 * (unsigned int)v_19) << (
                         (int)p_11[4] & 31));
  if ((v * (unsigned long long)v_9 - (unsigned long long)p_11[3]) + 470694589ULL > (unsigned long long)(
      (unsigned long)((int)p_13 % (p_6 + 170)) / ((v_15 | 29140UL) + 160UL))) 
    result = (unsigned long)p;
  else result = (unsigned long)(-1 - ((int)p_4 * p_6) * (int)-9.69214819672e+37f);
  return result;
}


