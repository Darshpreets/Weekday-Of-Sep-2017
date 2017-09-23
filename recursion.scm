(define (findMin lst) ; Find and return smallest number in a list
 (cond [(null? lst) '()]
       [(= (length lst) 1) (list-ref lst 0)]
       [(> (list-ref lst 0) (list-ref lst (- (length lst) 1))) (findMin (cdr lst))]
       [(< (list-ref lst 0) (list-ref lst (- (length lst) 1))) (findMin (drop-right lst 1))]
       (else
        (findMin (cdr lst))
        )
       )
  )