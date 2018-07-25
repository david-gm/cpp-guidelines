class ReceiverPath
{
  public:
    ReceiverPath();

    ReceiverPath(data::ReceiverFlag receiver_index, 
                 std::vector<tcautils::EllipsoidState<tcautils::DateTime>> nodes);

    ReceiverPath(data::ReceiverFlag receiver_index,
                 std::vector<tcautils::EllipsoidState<double>> nodes,
                 tcautils::DateTime start_time);
    virtual ~ReceiverPath();

    const std::vector<tcautils::EllipsoidState<tcautils::DateTime>> &getNodes() const;
    void initialize();
    data::ReceiverState *getReceiverState(tcautils::DateTime epoch);

  private:
    data::ReceiverFlag receiver_index_;
    std::vector<tcautils::EllipsoidState<tcautils::DateTime>> nodes_;
    std::map<tcautils::DateTime, ReceiverPathData *> receiver_path_data_;
    tcautils::EarthRotation earth_rotation_;
    const ReceiverPathData *findNearestNode(const tcautils::DateTime &epoch) const;
};

