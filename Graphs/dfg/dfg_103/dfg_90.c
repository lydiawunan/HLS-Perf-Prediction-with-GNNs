#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 924680870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, double p_7)
{
  unsigned short v_15;
  float v_13;
  unsigned short v_11;
  int v_9;
  int v_4;
  short v;
  unsigned long result;
  v_15 = p;
  v_13 = -8685208576.f;
  v_11 = (unsigned short)23039;
  v_4 = -496480667;
  v = (short)-9671;
  result = (unsigned long)p;
  v_9 = ((int)(- p_7) | ! ((int)p >> (v_4 & 15))) / (- ((int)((unsigned short)p_7) / (
                                                        (int)p + 698)) / (
                                                     (int)(- (! p)) + 555) + 636);
  v_4 = (int)(((18446744073709519436ULL - (unsigned long long)(result / (unsigned long)(
                                                               v_4 + 933))) >> (
               (int)(~ v_11) & 63)) + (unsigned long long)((-22252 % (
                                                            (int)(~ v_11) + 1022)) % (
                                                           ((-9109 & (int)((short)v_13)) + (int)v_15) + 592)));
  v_4 = (int)((double)(252 << ((long long)p * -512989015LL & 7LL)) / (
              (p_7 + 1141804422.) + 227.)) ^ ~ (! (v_9 * v_4));
  result = (unsigned long)(! ((int)v * ~ (- v_4)));
  return result;
}


