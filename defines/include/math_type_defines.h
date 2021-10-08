#pragma once

typedef enum { false, true } bool;

typedef struct {
  const void *real;
  unsigned long real_size;
  bool real_sing;

const void *imaginary;
  unsigned long imaginary_size;
  bool imaginary_sign;
} tNumber;

typedef struct {
  tNumber x;
  tNumber y;
  tNumber z;
} tTriple;

typedef struct {
  tNumber x;
  tNumber y;
  tNumber z;
  tNumber w;
} tQuadruple;

typedef struct {
    const void* data;
    unsigned long size;
} tTuple;

typedef struct {
    const void* data;
    unsigned long size;
} tSet;
