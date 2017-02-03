      auth_request_set $user $upstream_http_x_user;
      proxy_set_header X-User $user;
