#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859735827
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p)
{
  unsigned long v_15;
  unsigned char v_13;
  int v_11;
  int v_9;
  unsigned long long v_6;
  unsigned long v_4;
  double v;
  int result;
  v_15 = (unsigned long)p;
  v_13 = (unsigned char)70;
  v_11 = (int)p;
  v_9 = -26954;
  v_6 = 18446744073709538289ULL;
  v_4 = 47132UL;
  v = -687.057904528;
  result = (int)p;
  while ((unsigned long)((unsigned int)((double)p + - v) * ((unsigned int)(- p) % 827647774U)) >= ~ (
         v_4 % (unsigned long)((int)p + 333) + (unsigned long)((int)p % (
                                                               result + 874)))) {
    v_11 = v_15 * (unsigned long)4946553856.f;
    v_6 = (unsigned long long)((unsigned long)p * (v_4 - (unsigned long)(
                                                   (int)p - -29)));
    v_15 = (unsigned long)(((v_11 ^ 82) + 92) ^ (int)p);
    result = (int)(~ (! (! p)));
  }
  while_0_break: ;
  if (~ v_11 > (int)(- (- (~ v_13)))) {
    v_4 = (unsigned long)v_9;
    result = (int)((unsigned long long)(- (17669 >> ((int)((unsigned short)v) & 15))) + 
                   ((unsigned long long)v_4 - v_6) % (unsigned long long)(
                   (int)(! p) + 508));
    result = result;
  }
  else result = -67;
  return result;
}


