#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538213150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, char p_9, signed char p_13, char p_15,
                 unsigned long long p_17)
{
  unsigned short v_19;
  long long v_11;
  float v_7;
  unsigned char v_5;
  double v;
  unsigned int result;
  v_19 = (unsigned short)p_9;
  v_11 = -23982LL;
  v_7 = 642.359313965f;
  v = -571.488099995;
  v_5 = (unsigned char)(~ (((unsigned long long)v * p_17) % (unsigned long long)(
                           (int)(~ p_15) + 348)));
  if ((double)((624UL + (unsigned long)p_13) * (unsigned long)((int)-2558953728.f + 
                                                               (int)((unsigned short)v_7) % (
                                                               (int)v_19 + 870))) >= - v) {
    v_7 = - ((float)((int)p_9 + (int)((char)v)) / ((float)v_11 / (v_7 + 485.f) + 775.f));
    v = (double)((unsigned long)(~ (~ v_5)) / ((2337UL + (unsigned long)(- v_7)) + 67UL));
    result = (unsigned int)(! ((int)((unsigned char)v) | (int)p) % 139);
  }
  else result = (unsigned int)((unsigned long long)(- ((int)p_13 % ((int)p_15 + 973))) - ! (
                               p_17 - (unsigned long long)p_13));
  return result;
}


