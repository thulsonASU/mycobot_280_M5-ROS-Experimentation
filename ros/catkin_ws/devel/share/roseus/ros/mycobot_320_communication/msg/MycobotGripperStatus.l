;; Auto-generated. Do not edit!


(when (boundp 'mycobot_320_communication::MycobotGripperStatus)
  (if (not (find-package "MYCOBOT_320_COMMUNICATION"))
    (make-package "MYCOBOT_320_COMMUNICATION"))
  (shadow 'MycobotGripperStatus (find-package "MYCOBOT_320_COMMUNICATION")))
(unless (find-package "MYCOBOT_320_COMMUNICATION::MYCOBOTGRIPPERSTATUS")
  (make-package "MYCOBOT_320_COMMUNICATION::MYCOBOTGRIPPERSTATUS"))

(in-package "ROS")
;;//! \htmlinclude MycobotGripperStatus.msg.html


(defclass mycobot_320_communication::MycobotGripperStatus
  :super ros::object
  :slots (_Status ))

(defmethod mycobot_320_communication::MycobotGripperStatus
  (:init
   (&key
    ((:Status __Status) nil)
    )
   (send-super :init)
   (setq _Status __Status)
   self)
  (:Status
   (&optional (__Status :null))
   (if (not (eq __Status :null)) (setq _Status __Status)) _Status)
  (:serialization-length
   ()
   (+
    ;; bool _Status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Status
       (if _Status (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Status
     (setq _Status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get mycobot_320_communication::MycobotGripperStatus :md5sum-) "513e93c68ef2f26ff494445b932bb052")
(setf (get mycobot_320_communication::MycobotGripperStatus :datatype-) "mycobot_320_communication/MycobotGripperStatus")
(setf (get mycobot_320_communication::MycobotGripperStatus :definition-)
      "bool Status
")



(provide :mycobot_320_communication/MycobotGripperStatus "513e93c68ef2f26ff494445b932bb052")

