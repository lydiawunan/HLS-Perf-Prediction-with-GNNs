#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922548767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned char p_5, long long p_7, short p_9,
          unsigned short p_11)
{
  long v_25;
  long long v_23;
  char v_21;
  long v_19;
  int v_17;
  short v_15;
  signed char v_13;
  signed char v;
  short result;
  v_25 = 10520L;
  v_23 = -5842LL;
  v_21 = (char)-7;
  v_19 = (long)p_5;
  v_17 = (int)p_7;
  v_15 = (short)p_5;
  v_13 = (signed char)p_11;
  v = (signed char)38;
  result = (short)p;
  while (! ((long long)v_21 % (p_7 + 461LL)) / ((long long)((int)p_5 % (
                                                            (int)((unsigned char)p) + 535)) * (
                                                (long long)p * p_7) + 371LL) != - (~ (
         (long long)p_5 + v_23))) {
    v_23 = v_25 % 44419L;
    v = (signed char)(~ result);
    v_25 = (long)(p_7 / ((213826288LL | p_7) % (long long)((int)p * -15563 + 912) + 507LL));
    v_21 = (char)-109;
  }
  while_0_break: ;
  if ((float)(((long long)v_13 / -41835LL) % (long long)((int)v_15 * (int)p_5 + 83) - (long long)(
              2518 - (83 - (int)v))) != (float)(-89LL - ((long long)v_17 + p_7)) / (
                                        (float)(- v_19) * - p + 585.f)) {
    v = (signed char)(((long long)(! p_5) / ((p_7 + (long long)p_9) + 792LL)) / (long long)(
                      (223383479UL - (unsigned long)((int)p_11 % -938839442)) + 65UL));
    result = (short)(((float)(319057578UL / (unsigned long)((int)v + 22)) - 
                      p / -2.3447157639e+37f) / (p + 501.f));
  }
  else result = (short)(419549692 | - ((int)p_11 / 100));
  return result;
}


