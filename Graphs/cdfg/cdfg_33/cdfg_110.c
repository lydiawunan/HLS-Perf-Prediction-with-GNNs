#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 297518740
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, int p_5, char p_15, signed char p_17)
{
  char v_13;
  short v_11;
  char v_9;
  int v_7;
  double v;
  int result;
  v_11 = (short)27871;
  v_9 = (char)-54;
  v_7 = (int)p;
  v = -2.12969542785e+38;
  result = (int)(~ ((unsigned long long)(4907 % ((int)p_15 + 205)) % (
                    ((unsigned long long)p_17 - 44170ULL) + 101ULL)));
  while ((unsigned long long)(! (((int)p - (int)((unsigned char)v)) - (
                                 p_5 - 60))) != 18446744073475296140ULL) {
    v_9 = (long long)v_11 - (long long)v_9 * ((long long)v_7 * -34423LL);
    v_13 = (char)(- (27973ULL - (unsigned long long)(p_5 - -6)));
    v_11 = (short)((unsigned long long)p_5 * 146633735688747460ULL);
    v = (double)(! v_13);
  }
  while_0_break: ;
  return result;
}


