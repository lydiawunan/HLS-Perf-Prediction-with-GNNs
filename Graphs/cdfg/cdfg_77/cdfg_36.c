#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034088893
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned short p_23)
{
  float v_25;
  unsigned short v_21;
  unsigned long long v_19;
  unsigned long v_17;
  unsigned long long v_14;
  short v_12;
  long long v_10;
  int v_8;
  short v_6;
  unsigned short v_4;
  unsigned long v;
  double result;
  v_25 = 746.854553223f;
  v_21 = p_23;
  v_19 = (unsigned long long)p_23;
  v_17 = (unsigned long)p_23;
  v_14 = 18446744073709518481ULL;
  v_12 = (short)p;
  v_8 = p;
  v_6 = (short)p;
  v = 4294911430UL;
  if (! (v ^ v_17) + (unsigned long)p != (unsigned long)v_21) {
    v_10 = (long long)(! p - p);
    v_17 = (unsigned long)((unsigned long long)(- ((int)v_21 / -994)) % (
                           (unsigned long long)(~ p) % (((unsigned long long)p + v_19) + 319ULL) + 420ULL));
    v_8 = (int)(- v_6);
  }
  else {
    v_12 = (short)((int)p_23 / ((int)((unsigned short)(- (- v_25))) + 646));
    v_10 = 28LL;
    v_14 = (unsigned long long)(- (~ (~ v_17)));
  }
  if (v_19 / ((234300830ULL * (unsigned long long)v_21) % (unsigned long long)(
              - p + 128) + 528ULL) < (unsigned long long)(v_10 % (long long)(
                                                          p / (((int)v_12 + v_8) + 428) + 622))) {
    v = (unsigned long)((23748ULL * (unsigned long long)(38070UL + (unsigned long)v_8)) * (unsigned long long)v_10);
    v_4 = (unsigned short)((long)(~ v_6) | 328368186L);
    result = (double)(53682UL * (! v % (unsigned long)(-63829L % (long)(
                                                       (int)v_4 + 718) + 429L)));
  }
  else {
    v_21 = (unsigned short)12479;
    v_12 = (short)((unsigned long long)(- v_17) % ((v_19 + (unsigned long long)p) + 239ULL) | (unsigned long long)(
                   - p + (int)v_21 / 14343));
    result = (double)(((unsigned long long)v_12 + - v_14) * (3745654380ULL ^ (unsigned long long)(~ p)));
  }
  return result;
}


