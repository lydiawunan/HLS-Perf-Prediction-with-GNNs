#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 891125902
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, long long p_9, long p_13, double p_17, signed char p_19)
{
  short v_15;
  long v_11;
  unsigned char v_7;
  unsigned char v_4;
  signed char v;
  long result;
  v_15 = (short)p_9;
  v_11 = p_13;
  v_7 = (unsigned char)102;
  result = -9429L;
  v = (signed char)((long long)((double)v_15 * - (p_17 - (double)p_19)) / (
                    ((25143LL % (p_9 + 821LL)) * 3530898197LL - (long long)(- (! v_11))) + 557LL));
  v_4 = (unsigned char)((long long)(- v_11 / 20L) / ((p_9 << ((int)v & 63)) / (long long)(
                                                     - p_13 + 545L) + 142LL) + - (
                        (long long)(54427 + (int)v_15) * (108LL - p_9)));
  v = (signed char)(- ((long long)((int)v_7 >> ((int)v_7 & 7)) + p_9 * 30400LL) % 54194LL);
  result = (long)((((long long)(-546573475L % (result + 166L)) % 7LL) % (long long)(
                   - ((int)v % ((int)v_4 + 965)) + 888)) % ((long long)p / -42300LL + 286LL));
  return result;
}


