#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 866105945
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, double p_13, signed char p_15, short p_17, char p_19)
{
  double v_21;
  unsigned short v_11;
  long v_9;
  unsigned long long v_7;
  short v_5;
  unsigned long v;
  double result;
  v_21 = -7.92589742048e+37;
  v_11 = (unsigned short)p_19;
  v_9 = (long)p_17;
  v_7 = 1022405790ULL;
  v_5 = (short)p_13;
  result = p_13;
  if ((double)(! (! (! p))) >= v_21 - (double)v_11) {
    v_11 = (unsigned short)(1LL + ~ (-103LL * p));
    result = (double)((((unsigned long long)v_11 / (v_7 + 206ULL)) * (unsigned long long)(- p_13)) / (
                      ((v_7 | 116ULL) - (unsigned long long)v_11) + 914ULL));
    v = 889788155UL + ! (4294964705UL + (unsigned long)v_9);
  }
  else {
    v_9 = (long)result - (((long)v_11 | -634517167L) - (long)((int)p_19 % -25));
    v = (unsigned long)p_15;
    result = (double)(! (- ((int)p_15 / ((int)p_17 + 837))));
  }
  while (-48227LL <= ((long long)v | (p & (long long)((int)v_5 % ((int)((short)-6019701512.64) + 389))))) {
    v = (unsigned long long)v_9 | (v_7 ^ 18446744072698308940ULL);
    v_9 = 342133573L;
    v_7 = 18446744073709491019ULL;
    v_5 = (short)p;
  }
  while_0_break: ;
  return result;
}


