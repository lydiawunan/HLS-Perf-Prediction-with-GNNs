#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810926542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned long long p_9, long p_11, float p_13,
                  char p_17)
{
  char v_23;
  unsigned char v_21;
  unsigned long long v_19;
  int v_15;
  unsigned long long v_7;
  unsigned char v_5;
  long long v;
  unsigned char result;
  v_23 = (char)37;
  v_21 = (unsigned char)85;
  v_19 = (unsigned long long)p_11;
  v_15 = 35661;
  v = (long long)p;
  v_7 = (unsigned long long)((long long)((int)p_13 + (v_15 - (int)p_17)) + 
                             v * 4294902779LL) / ((((unsigned long long)p / (
                                                    v_19 + 660ULL)) % (unsigned long long)(
                                                   ((int)v_21 - (int)v_23) + 346)) * (unsigned long long)(
                                                  p_11 | -120L % (p_11 + 1024L)) + 430ULL);
  v_5 = (unsigned char)p_11;
  v = (long long)v_7;
  result = (unsigned char)((unsigned long long)(- (- (! p))) - ((unsigned long long)(
                                                                v + (long long)v_5) - v_7) / (
                                                               ~ (18446744073614613425ULL | p_9) + 514ULL));
  return result;
}


