#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 454805251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, double p_13)
{
  long v_17;
  int v_15;
  long long v_11;
  unsigned short v_9;
  unsigned long v_7;
  unsigned long long v_4;
  unsigned long v;
  signed char result;
  v_17 = -897503640L;
  v_15 = (int)p_13;
  v_11 = (long long)p;
  v_9 = (unsigned short)24326;
  v_7 = 4294923772UL;
  v_4 = 30716ULL;
  v = (unsigned long)p;
  result = (signed char)p;
  if (((unsigned long long)((v << (v_4 & 31ULL)) * 769UL) & - v_4) >= (unsigned long long)(~ ((int)((signed char)(
      p_13 * -26.))))) {
    v_17 = (long)(- p);
    v_7 = (unsigned long)((unsigned int)(~ (- v_15)) - p);
    v_11 = v_11;
  }
  else {
    result = (signed char)((unsigned long long)(! p - 4U) + ! (18446744072893513900ULL + (unsigned long long)p));
    v_9 = (unsigned short)(((double)(v - 4294911228UL) - (6654579712. - p_13)) / (
                           (double)(7010LL | (-44260LL + (long long)p_13)) + 42.));
    v_4 = (unsigned long long)v_7;
  }
  while ((int)result > (int)((signed char)-283.838105617)) {
    v = v_4 / 18446744073709523997ULL;
    v_9 = (unsigned short)((unsigned long)(~ (p + (unsigned int)v_15)) / (unsigned long)(
                           (long)(! v_9) % (v_17 + 857L) + 686L));
    v_4 = (unsigned long long)((long long)(- v_9) % (v_11 * (long long)p + 815LL) >> (
                               ((unsigned long)p * v) % (unsigned long)(
                               (unsigned int)p_13 % (p + 96U) + 145U) & 63UL));
    result = (signed char)(~ ((unsigned long)p % (v_7 + 603UL)));
  }
  while_0_break: ;
  return result;
}


