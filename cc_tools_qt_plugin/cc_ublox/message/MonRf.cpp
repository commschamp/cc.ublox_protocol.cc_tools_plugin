// Generated by commsdsl2tools_qt v6.3.0

#include "MonRf.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonAntPower.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonAntStatus.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MonJammingState.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonRf.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_nBlocks(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NBlocks;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved0;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_blockId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::BlockId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        struct FlagsMembers
        {
            static QVariantMap createProps_jammingState(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::JammingState;
                auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monJammingState(Field::name(), serHidden);
                return props;
            }

            static QVariantMap createProps_res1(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Res1;
                auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
                return props;
            }
        }; // struct FlagsMembers

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(FlagsMembers::createProps_jammingState(true))
                    .add(FlagsMembers::createProps_res1(true))
                    .asMap();
        }

        static QVariantMap createProps_antStatus(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::AntStatus;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monAntStatus(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_antPower(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::AntPower;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_monAntPower(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_postStatus(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PostStatus;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_noisePerMS(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::NoisePerMS;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_agcCnt(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::AgcCnt;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_jamInd(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::JamInd;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_ofsI(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OfsI;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_magI(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MagI;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_ofsQ(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OfsQ;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_magQ(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MagQ;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_blockId(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_antStatus(serHidden))
                .add(ElementMembers::createProps_antPower(serHidden))
                .add(ElementMembers::createProps_postStatus(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .add(ElementMembers::createProps_noisePerMS(serHidden))
                .add(ElementMembers::createProps_agcCnt(serHidden))
                .add(ElementMembers::createProps_jamInd(serHidden))
                .add(ElementMembers::createProps_ofsI(serHidden))
                .add(ElementMembers::createProps_magI(serHidden))
                .add(ElementMembers::createProps_ofsQ(serHidden))
                .add(ElementMembers::createProps_magQ(serHidden))
                .add(ElementMembers::createProps_reserved2(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonRfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_nBlocks(false));
    props.append(createProps_reserved0(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class MonRfImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonRf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonRfImpl
    >
{
public:
    MonRfImpl() = default;
    MonRfImpl(const MonRfImpl&) = delete;
    MonRfImpl(MonRfImpl&&) = delete;
    virtual ~MonRfImpl() = default;
    MonRfImpl& operator=(const MonRfImpl&) = default;
    MonRfImpl& operator=(MonRfImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRf::MonRf() : m_pImpl(new MonRfImpl) {}
MonRf::~MonRf() = default;

MonRf& MonRf::operator=(const MonRf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRf& MonRf::operator=(MonRf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonRf::MsgIdParamType MonRf::doGetId()
{
    return ::cc_ublox::message::MonRf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonRf::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRf::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRf::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRf::resetImpl()
{
    m_pImpl->reset();
}

bool MonRf::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRf::MsgIdParamType MonRf::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRf::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRf::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRf::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRf::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRf::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
