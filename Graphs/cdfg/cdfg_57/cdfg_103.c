#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204996619
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, char p_7, unsigned char p_9, unsigned short p_11,
           unsigned short p_13)
{
  int v_21;
  unsigned long v_19;
  unsigned long v_17;
  unsigned long long v_15;
  unsigned long v_5;
  short v;
  double result;
  v_21 = -34276;
  v_19 = (unsigned long)p_9;
  v_17 = 51105300UL;
  v_15 = (unsigned long long)p;
  v_5 = (unsigned long)p_11;
  v = (short)14917;
  result = (double)p;
  while ((unsigned long long)(v_5 - (unsigned long)((int)(- p_13) * (int)p_11)) == 
         ((unsigned long long)p_11 & v_15 / 11623ULL) - (unsigned long long)(~ (
         724UL - v_17))) {
    v_19 = ! (v_19 / 3455456202UL - (unsigned long)v_21);
    v_5 = (unsigned long)((long long)p_13 * (15401LL % (long long)((int)p_11 + 297)));
    v_15 = (unsigned long long)p_11;
  }
  while_0_break: ;
  if (8525 != (int)p_11 + (int)v) {
    v_5 = (unsigned long)((int)p_7 % ((int)((char)((result - 242.) + (double)(
                                                   -6037105664.f / ((float)p_9 + 104.f)))) + 790));
    v = (short)(- (~ (- v_5)));
    result = (double)((float)v - p);
  }
  else result = (double)((unsigned long long)(! p_7) / 322780ULL);
  return result;
}


