#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 897554005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned char p_4)
{
  unsigned short v_19;
  unsigned long v_17;
  unsigned char v_15;
  unsigned long v_13;
  unsigned char v_11;
  int v_9;
  unsigned long long v_7;
  int v;
  short result;
  v_19 = (unsigned short)47842;
  v_17 = (unsigned long)p_4;
  v_15 = (unsigned char)p;
  v_13 = 3387627446UL;
  v_11 = (unsigned char)214;
  v_9 = 34069;
  v_7 = (unsigned long long)p;
  v = (int)p_4;
  result = (short)32533;
  while (-6198694138.2 < (double)(- ((long long)v_11 * 41608LL - -125LL))) {
    v_9 = (unsigned long)v_19 / ((v_17 + 177UL) + 281UL);
    v_13 = (unsigned long)(~ -626LL);
    v_15 = (unsigned char)(- (130UL + v_13));
    v_11 = v_15;
  }
  while_0_break: ;
  while (~ (p * (long long)p_4) * (long long)(v - (int)((float)v_7 - -5288044544.f)) > (long long)(- (- (~ v_9)))) {
    v_11 = (long long)v_11 * -143897374LL;
    v_7 = (unsigned long long)v_15;
    result = (short)(v >> (-17292LL % ((p - p) + 55LL) & 31LL));
    v_9 = (int)(! (! p * (long long)v_13));
  }
  while_0_break_0: ;
  return result;
}


