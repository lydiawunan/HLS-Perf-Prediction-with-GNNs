#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 234527346
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long p_7, float p_9[1], char p_11,
              unsigned long p_13)
{
  float v_27;
  unsigned int v_25;
  short v_23;
  short v_21;
  unsigned long v_19;
  unsigned int v_17;
  short v_15;
  int v_5;
  short v;
  long long result;
  v_27 = p_9[0];
  v_25 = 4294933561U;
  v_23 = (short)p_7;
  v_19 = 3771475911UL;
  v_17 = (unsigned int)p_13;
  v_5 = (int)p_11;
  result = -327643077LL;
  if ((unsigned int)((int)((short)(- p_9[0])) + 4616) - ~ (! v_25) > (unsigned int)(
      - ((double)v_27 / 480.328307573) / 18.)) {
    v_17 = (unsigned int)(~ (p_13 - 4294967172UL) / ((! v_19 << (~ v_17 & 31U)) + 972UL));
    v_21 = (short)(~ (- (! v_5)));
    v_15 = (short)(23305LL % (result + 98LL));
  }
  else {
    v_15 = - v_23;
    v_21 = (short)((unsigned long long)((int)(! v_15)) % 12548ULL);
    v_17 = (unsigned int)(! (result % (long long)(v_19 + 972UL) + 22843LL));
  }
  if ((unsigned long)(((unsigned int)(2.09153769578e+38f * (float)v_15) - ~ v_17) << (
                      ((int)v_15 & v_5) % ((int)(! p) + 601) & 31)) <= 
      (unsigned long)(- (- p_9[0])) * (- v_19 % (unsigned long)((int)p_11 / (
                                                                (int)v_21 + 378) + 98))) {
    v = (short)(- (4294911134U + (unsigned int)((float)p_7 + p_9[0])));
    result = (long long)(-20463 + v_5);
    result = - ((result % (long long)((int)p + 456)) * (long long)v);
  }
  else result = (long long)((unsigned long long)(- (-20.630858008 * (double)p_11)) / (
                            - ((unsigned long long)p_13 + 18446744073709547261ULL) + 826ULL));
  return result;
}


