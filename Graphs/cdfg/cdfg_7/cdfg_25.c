#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142354590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, signed char p_4, double p_9, int p_11,
                  unsigned short p_21)
{
  int v_23;
  short v_19;
  char v_17;
  unsigned short v_15;
  long v_13;
  unsigned long long v_7;
  double v;
  unsigned long result;
  v_23 = (int)p_9;
  v_19 = (short)-11419;
  v_17 = (char)57;
  v_15 = (unsigned short)56815;
  v_13 = (long)p_21;
  v = p_9;
  result = (unsigned long)p_9;
  while ((double)(! (((int)v_17 % ((int)p_21 + 454)) * (int)(! v_17))) < v) {
    v_15 = (double)v_23 * 6744952440.59;
    v_19 = (short)(- p_4);
    v_23 = (int)(- (4.33052822073e+37 + (double)p_4));
    v = (double)(~ (((int)p_4 % ((int)((signed char)4105500411.39) + 92)) % (
                    v_23 * p_11 + 52)));
  }
  while_0_break: ;
  if ((double)(- (((unsigned long)v_15 + result) + (unsigned long)(~ v_17))) != - (
      (double)(1888 / ((int)v_19 + 268)) * p_9)) result = (unsigned long)(
                                                 181 << ((int)((unsigned char)-3510646048.47) & 7));
  else {
    v_7 = 24ULL;
    v = (double)((-310296568LL + (long long)result) * (long long)((float)v_7 - 8901001216.f) + (long long)(
                 (long)((int)p_9 + p_11) % (! v_13 + 253L)));
    result = (unsigned long)(! ((int)p / ((int)((short)((double)p_4 + v)) + 953)));
  }
  return result;
}


