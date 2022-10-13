;gnu clisp  2.49.60

;dynamic and static scoping

(defvar x 10)

(defun g (x)
    (setf x 20)
    (f x))

(defun f(x)
    (print x))

(g x)


(print x)
