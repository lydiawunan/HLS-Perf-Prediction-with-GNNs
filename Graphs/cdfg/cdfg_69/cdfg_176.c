#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1049841896
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned short p_7, int p_9, short p_13,
                       double p_19)
{
  unsigned char v_25;
  unsigned char v_23;
  unsigned long long v_21;
  unsigned short v_17;
  long v_15;
  unsigned long long v_11;
  short v_5;
  unsigned char v;
  unsigned long long result;
  v_25 = (unsigned char)164;
  v_23 = (unsigned char)p_19;
  v_21 = (unsigned long long)p_19;
  v_17 = (unsigned short)p_13;
  v_15 = -60411L;
  v_11 = (unsigned long long)p_9;
  v_5 = (short)p;
  if (18446744073276374448ULL != ((unsigned long long)v_15 * ((unsigned long long)v_23 * v_21)) / (unsigned long long)(
                                 ((int)v_5 - -3) % (((int)v_25 >> 3) + 765) + 293)) {
    result = 13ULL;
    v_5 = (short)v_11;
    v_21 = ((unsigned long long)((int)v_5 % ((int)((short)-1.95902843249e+38) + 375)) * (
            (unsigned long long)p | result)) % (unsigned long long)((
                                                                    (long long)(
                                                                    -31520 * p_9) + (
                                                                    p ^ (long long)v_5)) + 579LL);
  }
  else {
    v_5 = (short)((unsigned long long)((7416L + v_15) + 1612413952L) - ~ (
                  v_11 / (unsigned long long)(p_9 + 984)));
    v_17 = p_7;
    v_5 = v_5;
  }
  if ((unsigned long long)(~ ((int)p_7 * p_9 + (int)v_17)) >= ((unsigned long long)v_17 % (
                                                               v_21 % 18446744073709547092ULL + 4ULL)) / 722ULL) {
    v_5 = (short)((unsigned long long)((long long)((int)p_7 + p_9) - -389342765LL) % (
                  (v_11 * 538011452ULL | (unsigned long long)((int)((short)99410600.f) + (int)v_5)) + 1006ULL));
    v = (unsigned char)(~ ((p + 59LL) | (long long)((int)((short)-3.19373845771e+38) * (int)v_5)));
    result = (18446744073709501250ULL - (unsigned long long)v) % 888815649ULL;
  }
  else {
    v_17 = (unsigned short)(! v_11 % (unsigned long long)(0 % (unsigned long)(
                                                          ((int)p_19 - p_9) + 721) + 719UL));
    v_5 = (short)(~ (! ((int)v_5 + (int)v_17)));
    result = (unsigned long long)((long)p_13 % (- (v_15 | (long)v_5) + 423L));
  }
  return result;
}


