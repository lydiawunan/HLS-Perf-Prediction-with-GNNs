#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 514969846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, short p_13[3], unsigned short p_15, unsigned int p_23[4][4])
{
  short v_21;
  unsigned char v_19;
  char v_17;
  unsigned short v_11;
  short v_9;
  unsigned short v_7;
  long v_5;
  char v;
  int result;
  v_21 = (short)-11688;
  v_19 = (unsigned char)162;
  v_17 = (char)p_15;
  v_9 = (short)22076;
  v_5 = p;
  v = (char)-72;
  result = 512276042;
  if ((unsigned long)(- ((v_5 ^ v_5) - (long)(194 - (int)v_19))) > (unsigned long)(
                                                                   (long)(~ v_21) + ! v_5) * (unsigned long)p_23[1][0]) {
    v = (char)((int)p_15 + 1);
    result = - (~ (-115 - (int)v_9));
    v_7 = (unsigned short)(! p % ((long)(9774550429.01 - (double)((int)((short)-2.27252646115e+37) * (int)p_13[2])) + 724L));
  }
  else {
    v_21 = (short)p_23[1][1];
    v_7 = (unsigned short)(((long)v_17 & v_5) * ((long)((int)v_19 - (int)v_21) * p));
    v_9 = (short)((long)(- ((float)v - -1827973760.f)) % (~ ((long)p_13[1] - 56775L) + 320L));
  }
  while ((5614L | p) != (long)v) {
    v_11 = (unsigned long)v_9 - (unsigned long)v_7 % 3591662270UL;
    result = -21750;
    v_5 = (long)(- (- (683.206745943 + (double)v_5)));
    v = (char)v_11;
  }
  while_0_break: ;
  return result;
}


