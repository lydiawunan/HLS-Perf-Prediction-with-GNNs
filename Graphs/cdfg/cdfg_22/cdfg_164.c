#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 703997046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, long p_4, long p_6[4][1][3], long p_9,
                   long long p_11)
{
  short v_25;
  long long v_23;
  float v_21;
  long v_19;
  signed char v_17;
  long long v_15;
  char v_13;
  unsigned long v;
  unsigned short result;
  v_25 = (short)p_6[2][0][0];
  v_23 = p_11;
  v_21 = 169.304031372f;
  v_19 = -40469L;
  v_17 = (signed char)p;
  v_15 = 192102419LL;
  v_13 = (char)p_6[0][0][0];
  v = 1027389574UL;
  result = (unsigned short)4919;
  while (! ((31929LL - (long long)v_21) % (long long)(~ v_19 + 867L)) != p_11) {
    v_21 = (long long)v_25 * (v_23 + -2603LL);
    v_19 = (long)(! ((unsigned long)p_4 % 933443963UL) + (unsigned long)(
                  (int)v_21 % -154427727));
    result = (unsigned short)v;
    v_21 = (float)v_17;
  }
  while_0_break: ;
  while ((long long)(((unsigned long)(- p_6[1][0][0]) - (v & (unsigned long)p_6[1][0][0])) / (
                     - ((unsigned long)p_9 | 3800878452UL) + 295UL)) <= ~ (
         ! p_11 * (long long)((int)v_13 >> 2))) {
    v_19 = (double)v_19 + (double)v_17 * ((double)v_15 - 9190123213.08);
    v_15 = ! (28727LL % (long long)(p_4 + 882L));
    v_17 = (signed char)p_6[1][0][1];
    v_13 = (char)86;
  }
  while_0_break_0: ;
  return result;
}


