#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 269271304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, short p_5, long p_9, signed char p_15,
                  unsigned long p_17[5][5][2])
{
  char v_21;
  short v_19;
  long v_13;
  unsigned char v_11;
  unsigned short v_7;
  unsigned char v;
  unsigned long result;
  v_19 = (short)-20999;
  v_13 = 979468609L;
  v_11 = (unsigned char)27;
  v_21 = (char)v_13;
  if ((long long)(((int)(! p_5) + (int)p_15) * (int)(- p)) > ~ (-227031242LL | (long long)p_17[3][3][1]) % (long long)(
                                                             ((int)v_19 + (
                                                              (int)v_21 << (
                                                              (int)p_15 & 7))) + 817)) {
    v_7 = (unsigned short)((long long)p_9 & 39959LL / (long long)((int)(! v_11) + 805));
    v = (unsigned char)v_7;
    result = 0 - (unsigned long)(((int)v / 21090) % (((int)p ^ (int)p_5) + 649));
  }
  else {
    v_13 = (long)(18446635929986176756ULL / (unsigned long long)((unsigned long)(
                                                                 (int)((signed char)-4691557376.f) % (
                                                                 (int)p_15 + 371)) / (
                                                                 ! p_17[3][1][0] + 614UL) + 34UL));
    result = (unsigned long)v_13;
  }
  return result;
}


