#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 301170265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, float p_9, long p_17)
{
  signed char v_21;
  short v_19;
  short v_15;
  unsigned char v_13;
  long long v_11;
  long long v_7;
  unsigned long long v_5;
  short v;
  signed char result;
  v_21 = (signed char)p_17;
  v_19 = (short)-32591;
  v_15 = (short)32086;
  v_13 = (unsigned char)141;
  v_11 = 615359318LL;
  v_7 = (long long)p;
  v = (short)-22114;
  result = (signed char)-54;
  while ((unsigned long long)((long long)p_17 / (v_11 + 902LL) | (long long)(
                              (int)v + (int)(- result))) <= ((unsigned long long)p_9 & 
                                                             ((unsigned long long)v_15 - p) * (
                                                             p | (unsigned long long)v_19))) {
    v_11 = (int)v_21 - (int)((signed char)-4680167637.52);
    v_21 = (signed char)(-(unsigned char)215);
    v_13 = (unsigned char)(- ((unsigned long long)p_17 * ((unsigned long long)v_7 % (
                                                          p + 1021ULL))));
    v_19 = (short)(- ((unsigned long)(8 + (int)result) * ((unsigned long)v_21 + 22220UL)));
  }
  while_0_break: ;
  if (22422LL == -6685965079LL * ((long long)((int)v_13 * (int)v_15) - - v_11)) {
    result = (signed char)-40;
    result = (signed char)(! (p % 33265919ULL) % (unsigned long long)(
                           (-193261201L >> ((p + (unsigned long long)result) & 31ULL)) + 949L));
  }
  else {
    v = (short)((long long)((-103 >> 5ULL) / ((int)((float)v_7 / (p_9 + 657.f)) + 800)) / (
                (-439LL + - v_11) + 364LL));
    v_5 = p;
    result = (signed char)((unsigned long long)v - ((unsigned long long)(
                                                    (int)result % ((int)v + 297)) - (
                                                    3114ULL - v_5)));
  }
  return result;
}


